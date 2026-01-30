import <print>;
import <string>;
import <locale>;
import <iostream>;
import <format>;

using namespace std;

int main()
{
  // width
  int i{ 153 };
  println("|{:7}", i);
  println("|{:{}}", i, 12);
  println("|{1:{0}}", 12, i);

  println("");

  int j{ 123 };
  println("|{:7}|", j);
  println("|{:<7}|", j);
  println("|{:_>7}|", j);
  println("|{:_^7}|", j);

  println("|{:=>16}|", "");

  println("");

  // sign
  int k{ 456 };
  println("|{:<5}|", k);
  println("|{:<+5}|", k);
  println("|{:< 5}|", k);
  println("|{:< 5}|", -k);

  println("");

  // Integral types
  int l{ 42 };
  println("|{:10d}|", l);
  println("|{:10b}|", l);
  println("|{:#10b}|", l);
  println("|{:10X}|", l);
  println("|{:#10X}|", l);

  println("");

  // String types
  string s{ "ProCpp" };
  println("|{:_^10}|", s);

  println("");

  // Floating-point types
  double d{ 3.14159 / 2.3 };
  println("|{:12g}|", d);
  println("|{:12.2}|", d);
  println("|{:12e}|", d);

  int width{ 12 };
  int precision{ 3 };
  println("|{2:{0}.{1}f}|", width, precision, d);
  println("|{2:{0}.{1}}|", width, precision, d);

  println("");

  // 0
  int m{ 144000 };
  println("|{:012d}|", m);
  println("|{:+012d}|", m);
  println("|{:012X}|", m);
  println("|{:#012X}|", m);

  println("");

  float f{ 1.2f };
  cout << format(locale{ "nl" }, "|{:Lg}|\n", f);

  println("");
}
