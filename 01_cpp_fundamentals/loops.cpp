import <print>;
using namespace std;

int main()
{
  int i{ 0 };
  while (i < 5) {
    println("Wow, The Day is Coming!");
    ++i;
  }
  println("");

  int j{ 100 };
  do {
    println("Be Ready to See the Coming of Yeshua!");
    --j;
  } while (j > 90);
  println("");

  for (int i{ 0 }; i < 5; ++i) {
    println("Are you Ready to See Him Coming?");
  }
  println("");

  // Range-based for loop
  array arr{ 1, 2, 3, 4, 5, 6, 7 };
  for (int i : arr) { println("{}", i); }
  println("");

  // Range-based for loop with initializer
  for (array arr{ 1, 2, 3, 4, 5}; int i : arr) { println("{}", i); }
}
