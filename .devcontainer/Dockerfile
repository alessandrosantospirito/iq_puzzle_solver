# Use the official Ubuntu as a parent image
FROM ubuntu:latest

# Update the system and install necessary packages
RUN apt-get update && \
    apt-get install -y build-essential cmake git && \
    rm -rf /var/lib/apt/lists/*

# Clone GoogleTest from the official repository
RUN git clone https://github.com/google/googletest.git

# Build and install GoogleTest
WORKDIR /googletest
RUN cmake . && \
    make && \
    make install

# Set the working directory to /usr/src/myapp
WORKDIR /usr/src/myapp

# Clean up
RUN rm -rf /googletest

# Specify the command to run on container start
CMD ["/bin/bash"]
