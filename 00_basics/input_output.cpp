import <iostream>;
import <print>;
import <sstream>;

using namespace std;

int main()
{
  string name;
  string input;
  int age;

  print("Enter your name: ");
  getline(cin, name);

  print("Enter your age: ");
  if(getline(cin, input)) {
    // Use stringstream to convert the string to an int
    stringstream ss(input);

    if (ss >> age) {
      println("Success! you entered: {}", age);
    } else {
      println("Invalid input. That wasn't an integer.");
    }
  }

  println("How are you {}, {}? Still Young!", name, age);
}
