#!/bin/bash

# 1. Define variables
INF_SOURCE_01="MathUtils.cppm"
INF_OUTPUT_01="MathUtils.o"

echo "Starting the build process..."

# 2. Compile the code
# -o specifies the output filename
g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_01 -o $INF_OUTPUT_01

# 3. Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "-------------------------------"
    echo "Success! Interface files generated: $INF_OUTPUT_01"
    echo "Building Project"

    g++ -std=c++23 -fmodules-ts main.cpp \
        MathUtils.o \
        -o play.app

    ./play.app
else
    echo "Build failed. Please check your code."
fi
