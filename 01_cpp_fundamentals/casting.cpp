import <iostream>;
using namespace std;

int main()
{
  float myFloat{ 3.14f };
  int i1{ (int)myFloat };                // method 1
  int i2{ int(myFloat) };                // method 2
  int i3{ static_cast<int>(myFloat) };   // method 3
  
  cout << "myFloat: " << myFloat << endl;
  cout << "(int)myFloat: " << i1 << endl;
  cout << "int(myFloat): " << i2 << endl;
  cout << "static_cast<int>(myFloat): " << i3 << endl;

  short someShort{ 16 };
  long someLong{ someShort };          // no explicit cast needed
                                       //
  cout << "someShort: " << someShort << endl;
  cout << "someLong: " << someLong << endl;
}

