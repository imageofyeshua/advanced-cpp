#!/bin/zsh

# 1. Define variables
# INF_SOURCE_01="board.cppm"
# INF_OUTPUT_01="board.o"

echo "Starting the build process..."

# 2. Compile the code
# -o specifies the output filename
# g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_01 -o $INF_OUTPUT_01

# 3. Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "-------------------------------"
    # echo "Success! Interface files generated: $INF_OUTPUT_01 $INF_OUTPUT_01"
    echo "Building Project"

    g++ -std=c++23 -fmodules-ts -o main.app main.cpp -lSDL3

    ./main.app
else
    echo "Build failed. Please check your code."
fi
