import <print>;
import <utility>;
import <string>;
using namespace std;

void thirdPartyLibraryFunction(char* str) {
  println("{}", str);
}

void f(const char* str)
{
  thirdPartyLibraryFunction(const_cast<char*>(str));
}

int main()
{
  f("Hello, Daniel");

  string str{ "C++" };
  const string& constStr{ as_const(str) };

  println("Const String Content: {}", constStr);
  println("Const String Address: {}", static_cast<const void*>(&constStr));
}
