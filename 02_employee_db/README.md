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

## Library Install Order

1. iostream
2. print
3. string
4. vector
5. stdexcept


## Gemini Prompt

This is c++23 module based project in ubuntu GCC version 14.2 version environment.  Employee.cppm has class Employee description with constructor receiving name string& const and setName() setEmployeeNumber() setSalary() Getters and Setters with private field: string name, int employeeNumber, int salary. Employee.cpp file has to have implementation using module Employee.cppm with display() function to display Employee description. Database.cppm file has addEmployee() receiving "string& name" parameter, getEmployee() receiving employeeNumber as a parameter with private field "vector<Employee> employees" and int employeeNumber. Database.cpp has to implement function descriptions in Database.cppm such as addEmployee(), getEmployee() and displayAll() for displaying all the employees. Lastly, show me the compile and build process in the terminal.
