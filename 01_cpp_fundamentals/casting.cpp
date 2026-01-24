import <print>;
using namespace std;

int main()
{
  float myFloat{ 3.14f };
  int i1{ (int)myFloat };                // method 1
  int i2{ int(myFloat) };                // method 2
  int i3{ static_cast<int>(myFloat) };   // method 3
  
  println("myFloat: {}", myFloat);
  println("(int)myFloat: {}", i1);
  println("int(myFloat): {}", i2);
  println("static_cast<int>(myFloat): {}", i3);

  short someShort{ 16 };
  long someLong{ someShort };          // no explicit cast needed
                                       //
  println("someShort: {}", someShort);
  println("someLong: {}", someLong);
}

