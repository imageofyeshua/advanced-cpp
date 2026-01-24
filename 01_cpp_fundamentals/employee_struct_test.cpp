import <iostream>;
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

  cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
  cout << "Number: " << anEmployee.employeeNumber << endl;
  cout << "Salary: " << anEmployee.salary << endl;
}

