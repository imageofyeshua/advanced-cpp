import <print>;
import <utility>;
import employee;
using namespace std;

int main()
{
  Employee anEmployee;
  anEmployee.firstInitial = 'J';
  anEmployee.lastInitial = 'D';
  anEmployee.employeeNumber = 42;
  anEmployee.salary = 8000;

  println("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial);
  println("Number: {}", anEmployee.employeeNumber);
  println("Salary: {}", anEmployee.salary);
}

