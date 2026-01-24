import <iostream>;
using namespace std;

int main()
{
  int i{ 3 };

  if (i > 4) {
    cout << "i is bigger than 4" << endl;
  } else if (i > 2) {
    cout << "i is bigger than 2" << endl;
  } else {
    cout << "i is less than 2" << endl;
  }
}
