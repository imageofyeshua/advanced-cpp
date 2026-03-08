import MathUtils;
import <print>;
import <chrono>;

using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 2) {
    println("Hello, there!");
  } else {
    println("Hello, {}", argv[1]);
  }

  int lotto[4] {1, 2, 3, 4};

  println("lotto[0] address: {}", static_cast<void*>(&lotto[0]));
  println("lotto[1] address: {}", static_cast<void*>(&lotto[1]));
  println("lotto[2] address: {}", static_cast<void*>(&lotto[2]));
  println("lotto[3] address: {}", static_cast<void*>(&lotto[3]));

  println("(lotto + 0) address: {}", static_cast<void*>(lotto + 0));
  println("(lotto + 1) address: {}", static_cast<void*>(lotto + 1));
  println("(lotto + 2) address: {}", static_cast<void*>(lotto + 2));
  println("(lotto + 3) address: {}", static_cast<void*>(lotto + 3));

  // array vs. pointer
  int array[5] {1, 2, 3, 4, 5};
  int *pointer_array = array;

  println("array: {}", static_cast<void*>(array));
  println("pointer_array: {}", static_cast<void*>(pointer_array));
  println("sizeof(array): {}", sizeof(array));
  println("sizeof(pointer_array): {}", sizeof(pointer_array));

  // dynamic memory allocation
  int *pt_int_value = new int;
  println("pt_int_value after new: {}", static_cast<void*>(pt_int_value));

  *pt_int_value = 100;
  println("dynamic memory value: {}", *pt_int_value);

  delete pt_int_value;

  println("dynamic memory value after delete: {}", *pt_int_value);
  println("pt_int_value after delete: {}", static_cast<void*>(pt_int_value));

  // dynamic memory allocation in array
  int *pt_int_array_value = new int[5];

  for (int i = 0; i < 5; i++)
  {
    pt_int_array_value[i] = i;
  }

  for (int i = 0; i < 5; i++)
  {
    print("[{}]", pt_int_array_value[i]);
  }
  println("");

  return 0;
}
