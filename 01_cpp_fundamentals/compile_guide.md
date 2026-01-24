# compile the two standard headers <iostream> and <string>

g++ -std=c++23 -fmodules-ts -x c++-system-header iostream

# compile the module interface file if any

g++ -std=c++23 -fmodules-ts -c -x c++ helloworld.cppm

# compile the application itself
g++ -std=c++23 -fmodules-ts -o helloworld.app helloworld.cpp
