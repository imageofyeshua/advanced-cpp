int func(int param1, [[maybe_unused]] int param2)
{
  return 153;
}

int main()
{
  int result{ func(1, 2) };
}
