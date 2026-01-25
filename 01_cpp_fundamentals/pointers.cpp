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
  int* myIntPointer{ nullptr };

  myIntPointer = new int;
  *myIntPointer = 7;
  println("myIntPointer Address: {}", static_cast<void*>(myIntPointer));

  delete myIntPointer;
  myIntPointer = nullptr;
  println("myIntPointer Address after delete & nullptr: {}", static_cast<void*>(myIntPointer));

  int yourInt{ 42 };
  int* yourIntPointer = &yourInt;
  println("yourInt Address: {}", static_cast<void*>(yourIntPointer));

  int i{ 12 };
  int* hisIntPointer{ &i };
  println("hisIntPointer Address: {}", static_cast<void*>(hisIntPointer));

  Employee* anEmployee{ new Employee{ 'J', 'D', 42, 80'000 } };

  println("Employee salary: {}", (*anEmployee).salary);
  println("Employee salary: {}", anEmployee->salary);

  bool isValidSalary1{ anEmployee && anEmployee->salary > 0 };
  bool isValidSalary2{ anEmployee != nullptr && anEmployee->salary > 0 };

  println("anEmployee has valid salary: {}", isValidSalary1);
  println("anEmployee has valid salary: {}", isValidSalary2);

  delete anEmployee;
  anEmployee = nullptr;
  println("anEmployee Address after delete & nullptr: {}", static_cast<void*>(anEmployee));
}
