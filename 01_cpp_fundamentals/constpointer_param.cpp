import <print>;
import <string>;
using namespace std;

void mysteryFunction(const string* someString)
{
  // *someString = "Test"; // Will not compile
  println("{}", *someString);
}

int main()
{
  string myString{ "Our Father in heaven..."};
  mysteryFunction(&myString); // &myString is a string*
}
