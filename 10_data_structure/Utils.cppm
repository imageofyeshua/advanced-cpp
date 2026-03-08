export module Utils;

import <print>;
import <cassert>;
using namespace std;

export int add(int a, int b) {
  return a + b;
}

export void change_negative(int* val) {
  if (*val > 0) {
    *val = -(*val);
  }
}

export int average(int array[], int count) {
  int sum {0};
  
  for (int i {0}; i < count; i++) {
    sum += array[i];
  }
  return (sum / count);
}

export int getNEWID()
{
  static int ID {0};
  return ++ID;
}

export void swap(int &ref_a, int &ref_b)
{
  println("[swap func] before swap ref_a: {} ref_b: {}", ref_a, ref_b);

  int temp = ref_a;
  ref_a = ref_b;
  ref_b = temp;

  println("[swap func] after swap ref_a: {} ref_b: {}", ref_a, ref_b);
}

export void increment(int &num)
{
  num++;
}

export void func_throw()
{
  println("func_throw()");
  println("throw -1");
  throw -1;
  println("after throw -1");
}

export void print_number(int *pt_int)
{
  assert(pt_int != NULL);
  println("{}", *pt_int);
}
