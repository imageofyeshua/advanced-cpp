## Compile Interface >> Generate gcm.cache/Employee.gcm & Employee_int.o

$ g++ -std=c++23 -fmodules-ts -x c++ -c Employee.cppm -o Employee_int.o
$ g++ -std=c++23 -fmodules-ts -x c++ -c Database.cppm -o Database_int.o

## Compile Implementation >> Uses Employee.gcm & Generates Employee_impl.o

$ g++ -std=c++23 -fmodules-ts -c Employee.cpp -o Employee_impl.o
$ g++ -std=c++23 -fmodules-ts -c Database.cpp -o Database_impl.o

## Confirm Files

$ ls -F Employee_int.o Database_int.o
$ ls -R gcm.cache/Employee.gcm gcm.cache/Database.gcm

## Link All Files

$ g++ -std=c++23 -fmodules-ts UserInterface.cpp \
       Employee_int.o Employee_impl.o \
       Database_int.o Database_impl.o \
       -o EmployeeApp

## System Locale Setup

$ sudo apt install -y locales
$ sudo locale-gen en_US.UTF-8
$ sudo update-locale LANG=en_US.UTF-8
