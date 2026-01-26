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
  int& xRef{ x }; // Reference : an alias for an existing variable, must be initialized.
  xRef = 10;
  // int& emptyRef; // DOES NOT COMPILE!
  println("x: {}", xRef);

  xRef = y; // Changes value of x to 4. Doesn't make xRef refer to y.
  println("xRef: {}", xRef);
  println("x: {}", x);

  // xRef = &y; // DOES NOT COMPILE!!

  int& zRef{ z };
  zRef = xRef; // Assigns values, not references
  println("zRef: {}", zRef);

  const int& zRef2{ z };
  // zRef2 = 4; // DOES NOT COMPILE!!

  // Error: a reference-to-non-const referring to a constant
  // int& unnamedRef1 { 5 }; // DOES NOT COMPILE!!
  const int& unnamedRef2 { 5 };
  println("unnamedRef2: {}", unnamedRef2);

  // string& string1 { getString() }; // DOES NOT COMPILE!!
  const string& string2 { getString() };
  println("string2: {}", string2);

  int* intP{ nullptr };
  int*& ptrRef{ intP };
  ptrRef = new int;
  println("ptrRef: {}", *ptrRef);
  *ptrRef = 7;
  println("ptrRef: {}", *ptrRef);
  delete ptrRef; ptrRef = nullptr;

  int* xPtr{ &xRef };
  *xPtr = 100;
  println("x: {}", x);

  pair myPair{ "hello", 7 };
  const auto& [theString, theInt] { myPair };
  println("theString: {}, theInt: {}", theString, theInt);
}
