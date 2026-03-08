import Utils;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main(int argc, char *argv[])
{
  int a = 3;
  int b = 5;
  const int *ptr = &a;
  int *const ptr2 = &a; // const pointer

  println("a: {}", a);
  println("*ptr: {}", *ptr);

  a = 7;
  // *ptr = 9; // compile error
  // ptr2 = &b; // compile error
  println("*ptr: {}", *ptr);

  swap(a, b);

  println("[main] after swap, a: {}, b: {}", a, b);

  increment(b);
  println("Updated value b: {}", b);

  return 0;
}
