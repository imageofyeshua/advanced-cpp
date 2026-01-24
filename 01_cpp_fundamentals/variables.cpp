import <iostream>;
using namespace std;

int main()
{
  int uninitializedInt;
  int initializedInt { 7 };

  cout << uninitializedInt << " is a random value" << endl;
  cout << initializedInt << " was assigned as an initial value" << endl;
}
