import <print>;
import <string>;
using namespace std;

void printString(const string& myString)
{
  println("{}", myString);
}

int main()
{
  string prayer{ "Our Father in heaven..." };
  printString(prayer);
  printString("Sanctified be Thy Name..."); // Passing literals works
}
