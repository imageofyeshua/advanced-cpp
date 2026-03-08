#!/bin/zsh

# 1. Define variables
INF_SOURCE_01="MathUtils.cppm"
INF_OUTPUT_01="MathUtils.o"
INF_SOURCE_02="Person.cppm"
INF_OUTPUT_02="Person.o"

echo "Starting the build process..."

# 2. Compile the code
# -o specifies the output filename
g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_01 -o $INF_OUTPUT_01
g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_02 -o $INF_OUTPUT_02

# 3. Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "-------------------------------"
    echo "Success! Interface files generated: $INF_OUTPUT_01"
    echo "Success! Interface files generated: $INF_OUTPUT_02"
    echo "Building Project"

    g++ -std=c++23 -fmodules-ts main.cpp \
        MathUtils.o \
        Person.o \
        -o play.app

    ./play.app
else
    echo "Build failed. Please check your code."
fi
