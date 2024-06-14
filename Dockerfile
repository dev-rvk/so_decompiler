# Use a base image with Python and Docker
FROM --platform=linux/amd64 python:3.8-slim

# Install basic dependencies
RUN apt-get update && \
    apt-get install -y wget git sudo build-essential libffi-dev python3-dev virtualenv python3-pip libssl-dev libunicorn-dev libcapstone-dev unzip

# Install angr
RUN pip install angr

# Download and install Ghidra
RUN wget https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_11.1_build/ghidra_11.1_PUBLIC_20240607.zip && \
    unzip ghidra_11.1_PUBLIC_20240607.zip -d /opt && \
    rm ghidra_11.1_PUBLIC_20240607.zip

# Set up environment variables for Ghidra
ENV GHIDRA_HOME=/opt/ghidra_11.1_PUBLIC
ENV PATH=$PATH:$GHIDRA_HOME

# Create directory for Java installation
RUN mkdir -p /opt/java

# # Download and install Temurin (AdoptOpenJDK) 11
# RUN wget -qO- https://api.adoptopenjdk.net/v3/binary/latest/21/ga/linux/aarch64/jdk/hotspot/normal/adoptopenjdk | tar xvz -C /opt && \
#     ln -s /opt/jdk-21.* /opt/java/openjdk

# Download and install Temurin (AdoptOpenJDK) 11
RUN wget -qO- https://api.adoptopenjdk.net/v3/binary/latest/21/ga/linux/x64/jdk/hotspot/normal/adoptopenjdk | tar xvz -C /opt && \
    ln -s /opt/jdk-21.* /opt/java/openjdk

# Set up environment variables for Java
ENV JAVA_HOME=/opt/java/openjdk
ENV PATH=$JAVA_HOME/bin:$PATH

# Set up a working directory
WORKDIR /decompile

# Copy the decompilation script to the container
COPY decompile.py .

# Make directory for ghidra projects
RUN mkdir temp

# Copy the Ghidra script to the container
COPY Decompiler.java ./scripts/

# # Make sure the script is executable
# RUN chmod +x $GHIDRA_HOME/support/analyzeHeadless

# Set up the entrypoint
ENTRYPOINT ["python", "decompile.py"]


# docker run -v ./uploads:/decompile/uploads -v ./output:/decompile/output decompiler ghidra /decompile/uploads/libnative-lib.so /decompile/output