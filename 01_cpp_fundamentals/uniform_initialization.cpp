import <vector>;
import <format>;
import <ranges>;
import <print>;
using namespace std;

struct CircleStruct
{
  int x, y;
  double radius;
};

class CircleClass
{
  public:
    CircleClass(int x, int y, double radius)
      : m_x{ x }, m_y{ y }, m_radius{ radius } {}
  private:
    int m_x, m_y;
    double m_radius;
};

void func(int i) { /* ... */ }

class MyClass
{
  public:
    MyClass() : m_array{0, 1, 2, 3} {}
  private:
    int m_array[4];
};

struct Employee
{
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary;
};

int main()
{
  vector<string> myVec = {"String 1", "String 2", "String 3"};

  // Old pre-C++11 way
  CircleStruct myCircle1 = { 10, 10, 2.4 };
  CircleClass myCircle2(10, 10, 2.4);
  println("myCircle1.x: {}, myCircle1.y: {}, myCircle1.radius: {}", myCircle1.x, myCircle1.y, myCircle1.radius);

  // C++11 uniform initialization
  CircleStruct myCircle3 = {10, 10, 4.8};
  CircleClass myCircle4 = {10, 10, 4.8};
  CircleStruct myCircle5{10, 10, 4.8};
  CircleClass myCircle6{10, 10, 4.8};

  // Initializing a struct
  Employee anEmployee;
  anEmployee.firstInitial = 'J';
  anEmployee.lastInitial = 'D';
  anEmployee.employeeNumber = 42;
  anEmployee.salary = 80'000;

  println("Employee name: {}{}", anEmployee.firstInitial, anEmployee.lastInitial);

  // Initializing a struct with uniform initialization
  Employee anEmployee2{ 'F', 'A', 48, 90'000 };

  int a = 3;
  int b(3);
  int c = { 3 };
  int d{ 3 };
  int e{};

  Employee anEmployee3;
  Employee anEmployee4{ };

  // Narrowing
  int x = 3.14;
  func(3.14);

  MyClass myClass;
}
