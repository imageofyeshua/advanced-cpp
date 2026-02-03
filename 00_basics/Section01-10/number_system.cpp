import <print>;

using namespace std;

int main()
{
  int number1 = 15; // Decimal
  int number2 = 017; // Octal
  int number3 = 0x0F; // Hexadecimal
  int number4 = 0b00001111; // Binary

  println("number1: {}", number1);
  println("number2: {}", number2);
  println("number3: {}", number3);
  println("number4: {}", number4);
}
