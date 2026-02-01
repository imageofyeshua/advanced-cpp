import <iostream>;
import <print>;

using namespace std;

int main(){

  char character1 {'a'};
  char character2 {'r'};
  char character3 {'r'};
  char character4 {'o'};
  char character5 {'w'};

  println("{}", character1);
  println("{}", character2);
  println("{}", character3);
  println("{}", character4);
  println("{}", character5);

  //One byte in memory : 2^8 = 256 different values (0 ~ 255)
  println("");

  char value = 65 ; // ASCII character code for 'A'
  println("Value : {}", value);
  println("Value(int) static_cast<int> : {}", static_cast<int>(value));
  println("Value(int) type specifier : {:d}", value);

  return 0;
}
