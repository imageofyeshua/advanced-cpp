import <iostream>;
import <print>;
import <format>;

using namespace std;

int main()
{
  int x{ 42 };
  int y{ 84 };

  // C-style function
  printf("x has value %d and y has value %d.\n", x, y);

  // C++ I/O stream
  cout << "x has value " << x << " and y has value " << y << '.' << endl;

  // C++20 std::format() + I/O streams
  cout << format("x has value {} and y has value {}.", x, y) << endl;

  // C++23 std::println()
  println("x has value {} and y has value {}.", x, y);

  // C++23 std::println() + Unicode
  println("こんにちは世界");

  // I/O streams + Unicode
  cout << "안녕하세요!" << endl;

  // C++23 std::println() + Unicode emojis
  println("😀");

  int fish{ 153 };
  string prayer{ "願人都尊祢的名為聖" };

  println("Caught {} fish from {}", fish, "Galilee");
  println("Caught {0} fish from {1}", fish, "Galilee");
  println("我們在天上的父, {1}, 願祢的國降臨, {0}", "願祢的旨意行在地上", prayer);
}
