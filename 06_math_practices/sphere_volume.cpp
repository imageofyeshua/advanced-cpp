import <print>;
import <iostream>;
import <numbers>;
import <cmath>;

using namespace std;

int main()
{
  double radius;

  print("Enter the radius of the sphere: ");
  if (!(std::cin >> radius))  {
    print(std::cerr, "Error: Invalid Input.\n");
    return 1;
  }

  double volume = (4.0 / 3.0) * std::numbers::pi * std::pow(radius, 3);

  println("The volume of the sphere is : {:.2f}\n", volume);

  return 0;
}
