import <print>;
using namespace std;

int main()
{
  // Using CTAD(Class Template Argument Deduction) 
  array<int, 3> myArray{ 9, 8, 7 };
  println("myArray size = {}", myArray.size());
  println("2nd element = {}", myArray[1]);
}
