#!/bin/bash

# 1. Define variables
INF_SOURCE_01="Employee.cppm"
INF_SOURCE_02="Database.cppm"
INF_OUTPUT_01="Employee_int.o"
INF_OUTPUT_02="Database_int.o"
IMPL_SOURCE_01="Employee.cpp"
IMPL_SOURCE_02="Database.cpp"
IMPL_OUTPUT_01="Employee_impl.o"
IMPL_OUTPUT_02="Database_impl.o"

echo "Starting the build process..."

# 2. Compile the code
# -o specifies the output filename
g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_01 -o $INF_OUTPUT_01
g++ -std=c++23 -fmodules-ts -x c++ -c $INF_SOURCE_02 -o $INF_OUTPUT_02
g++ -std=c++23 -fmodules-ts -c $IMPL_SOURCE_01 -o $IMPL_OUTPUT_01 
g++ -std=c++23 -fmodules-ts -c $IMPL_SOURCE_02 -o $IMPL_OUTPUT_02 

# 3. Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "-------------------------------"
    echo "Success! Interface files generated: $INF_OUTPUT_01 $INF_OUTPUT_02"
    echo "Success! Implementation files generated: $IMPL_OUTPUT_01 $IMPL_OUTPUT_02"
    echo "Building Project"

    g++ -std=c++23 -fmodules-ts UserInterface.cpp \
        Employee_int.o Employee_impl.o \
        Database_int.o Database_impl.o \
        -o Employee.app

    ./Employee.app
else
    echo "Build failed. Please check your code."
fi
