import <iostream>;
using namespace std;

namespace mycode {
  void foo()
  {
    cout << "Foo() called in the mycode namespace" << endl;
  }
}

using namespace mycode;

int main()
{
  mycode::foo();
  foo();
}
