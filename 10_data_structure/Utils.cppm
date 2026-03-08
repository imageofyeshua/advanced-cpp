export module Utils;

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
