# Compile the Module Interface >> Create Gcm
g++ -std=c++20 -fmodules-ts -x c++ -c math.cppm

# Compile the Main Program
g++ -std=c++20 -fmodules-ts main.cpp math.o -o play.app

# Execute the Program
./play.app
