import <iostream>;
using namespace std;

int main()
{
  int i{ 3 };
  cout << "i is bigger than 2 : " << ((i > 2) ? "yes" : "no") << endl;
  cout << "i is bigger than 2 : " << (i > 2 ? "yes" : "no") << endl;
}
