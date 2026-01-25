import <print>;
import <string>;
using namespace std;

string getString()
{
  return "Our Father in heaven...";
}

int main()
{
  int x{ 3 }, y{ 4 }, z{ 5 };
  int& xRef{ x };
  xRef = 10;
  // int& emptyRef; // DOES NOT COMPILE!
  println("x: {}", xRef);

  xRef = y;
  println("x: {}", xRef);
}
