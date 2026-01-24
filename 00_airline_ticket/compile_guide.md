# compile the two standard headers <iostream> and <string>

g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
g++ -std=c++20 -fmodules-ts -x c++-system-header string

# compile the module interface file

g++ -std=c++20 -fmodules-ts -c -x c++ AirlineTicket.cppm

# compile the application itself
g++ -std=c++20 -fmodules-ts -o AirlineTicket.app AirlineTicket.cpp AirlineTicketTest.cpp AirlineTicket.o


