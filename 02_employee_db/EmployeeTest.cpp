import <print>;
import <string>;
import Employee;

using namespace std;
using namespace Records;

int main()
{
  println("Testing the Employee class.");
  println("---------------------------");
  Employee emp { "Daniel", "Park" };
  emp.setFirstName("Jason");
  emp.setLastName("Lee");
  emp.setEmployeeNumber(77);
  emp.setSalary(50'000);
  emp.promote();
  emp.promote(50);
  emp.hire();
  emp.display();
}
