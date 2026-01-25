import <print>;
using namespace std;

int main()
{
  int arraySize{ 8 };
  int* myVariableSizedArray{ new int[arraySize] };
  myVariableSizedArray[3] = 2;
  
  println("myVariableSizedArray Address: {}", static_cast<void*>(myVariableSizedArray));

  println("myVariableSizedArray Content: {}", *myVariableSizedArray);
}
