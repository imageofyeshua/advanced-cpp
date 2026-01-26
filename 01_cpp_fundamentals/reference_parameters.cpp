import <print>;
using namespace std;

void addOneA(int i)
{
  i++;
}

void addOneB(int& i)
{
  i++;
}

void swap(int& first, int& second)
{
  int temp{ first };
  first = second;
  second = temp;
}

int main()
{
  int myInt{ 7 };
  addOneA(myInt);
  println("myInt: {}", myInt);
  addOneB(myInt);
  println("myInt: {}", myInt);

  int x{ 5 }, y{ 6 };
  swap(x, y);

  println("x: {}, y: {}", x, y);

  int* xp{ &x }, * yp{ &y };
  swap(*xp, *yp);
  println("x: {}, y: {}", *xp, *yp);
}
