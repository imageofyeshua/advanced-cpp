import <print>;

using namespace std;

int main(){
  println("Compount Bitwise Assignment Operators");

  unsigned char sandbox_var {0b00110100}; // 8 bits : positive numbers only

  println("");

  // Print out initial value
  println("Initial value : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var);

  // Compound left shift
  println("");
  println("Shift left 2 bit positions in place : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var <<= 2);

  // Compound right shift
  println("");
  println("Shift right 4 bit positions in place : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var >>= 4);

  // Compound OR with 0000 0010 to have all lower 4 bits turned on 
  println("");
  println("Compound OR with 0000 0010 : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var |= 0b00000010);

  // Compound AND with 0000 1100 to turn off the 2 lowest bits
  println("");
  println("Compound AND with 0000 1100 : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var &= 0b00001100);

  // XOR with 00000011 to turn on the 4 lowest bits again
  println("");
  println("Compound XOR with 0000 0011 : ");
  print("{:<20}", "sandbox_var : ");
  println("{:08b}", sandbox_var ^= 0b00000011);

  return 0;
}
