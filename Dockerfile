# Use an Ubuntu base image
FROM ubuntu:20.04

# Install dependencies
RUN apt-get update && apt-get install -y cmake g++ make

# Set the working directory
WORKDIR /app

# Copy the build directory to the container
COPY build/ /app

# Set the command to run your compiled program
CMD ["./main"]
