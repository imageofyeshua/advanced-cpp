import <print>;

using namespace std;

int main(){

  unsigned char value1 {0x3}; // 0000 0011
  unsigned char value2 {0x5}; // 0000 0101

  print("{:<20}", "value1 : ");
  println("{:08b}", value1);

  print("{:<20}", "value2 : ");
  println("{:08b}", value2);

  println("");

  // AND
  println("Bitwise AND : ");
  print("{:<20}", "value 1 & value2 : ");
  println("{:08b}", value1 & value2);

  println("");

  //OR
  println("Bitwise OR : ");
  print("{:<20}", "value 1 | value2 : ");
  println("{:08b}", value1 | value2);

  println("");

  //NOT
  println("Bitwise NOT : ");
  print("{:<20}", "~value1 : ");
  println("{:08b}", static_cast<unsigned char>(~value1));

  print("{:<20}", "~value2 : ");
  println("{:08b}", static_cast<unsigned char>(~value2));

  print("{:<20}", "~01011001(0b) : ");
  println("{:08b}", static_cast<unsigned char>(~0b01011001));

  print("{:<20}", "~01011001(0x59) : ");
  println("{:08b}", static_cast<unsigned char>(~0x59));

  println("");

  //XOR
  println("Bitwise XOR : ");
  print("{:<20}", "value ^ value2 : ");
  println("{:08b}", value1 ^ value2);

  return 0;
}
