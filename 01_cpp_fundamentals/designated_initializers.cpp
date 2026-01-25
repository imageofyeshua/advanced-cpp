import <print>;
using namespace std;

struct Employee {
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary{ 75'000 };
};

int main()
{
  Employee anEmployee1{
    .firstInitial = 'J',
    .lastInitial = 'D',
    .employeeNumber = 42,
    .salary = 80'000
  };

  Employee anEmployee2{
    .firstInitial = 'J',
    .lastInitial = 'D',
    .salary = 80'000
  };

  Employee anEmployee3{
    .firstInitial = 'J',
    .lastInitial = 'D',
  };

  println("Employee 3 Name: {}{}", anEmployee3.firstInitial, anEmployee3.lastInitial);
  println("Employee 3 Number & Salary: {} : {}", anEmployee3.employeeNumber, anEmployee3.salary);
}
