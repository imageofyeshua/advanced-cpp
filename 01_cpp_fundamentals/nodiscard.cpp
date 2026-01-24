[[nodiscard]] int func()
{
  return 33;
}

[[nodiscard("You idiot!")]] int func2()
{
  return 77;
}

int main()
{
  func();
  func2();
}
