import <print>;

using namespace std;

int main(){
  // Highlight position for bit of interest with a 1
  // Mask other positions with 0

  const unsigned char mask_bit_0 {0b00000001} ;//Bit0
  const unsigned char mask_bit_1 {0b00000010} ;//Bit1
  const unsigned char mask_bit_2 {0b00000100} ;//Bit2
  const unsigned char mask_bit_3 {0b00001000} ;//Bit3
  const unsigned char mask_bit_4 {0b00010000} ;//Bit4
  const unsigned char mask_bit_5 {0b00100000} ;//Bit5
  const unsigned char mask_bit_6 {0b01000000} ;//Bit6
  const unsigned char mask_bit_7 {0b10000000} ;//Bit7

  // Sandbox variable
  unsigned char var {0b00000000};// Starts off all bits off

  print("{:<20}", "var : ");
  println("{:08b}", var);

  println("");

  //Set a few bits : make them 1's regardless of what's in there

  //SETTING BITS
  //Setting : |= with mask of the bit

  //Set bit 1
  println("Setting bit in position 1");
  print("{:<20}", "var : ");
  println("{:08b}", var |= mask_bit_1);

  println("");

  //Set bit 5
  println("Setting bit in position 5");
  print("{:<20}", "var : ");
  println("{:08b}", var |= mask_bit_5);
  
  println("");

  //RESETTING BITS : set to 0
  //Resetting : &= (~mask)

  //Reset bit 1
  println("Resetting bit in position 1");
  print("{:<20}", "var : ");
  println("{:08b}", var &= ~(mask_bit_1));

  println("");

  //Reset bit 5
  println("Resetting bit in position 5");
  print("{:<20}", "var : ");
  println("{:08b}", var &= ~(mask_bit_5));

  println("");

  //Set all bits
  println("Setting all bits");
  print("{:<20}", "var : ");
  var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
      mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
  println("{:08b}", var);

  println("");

  //Reset bits at pos 0,2,4,6
  println("Reset bits at pos 0,2,4,6");
  var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
  print("{:<20}", "var : ");
  println("{:08b}", var);

  println("");

  //Check state of a bit
  println("Checking the state of each bit position (on/off)");

  for (int i = 7; i >= 0; --i) {
    // Shift right by 'i' and mask the last bit
    unsigned int bit = (var >> i) & 1;
    println("Bit {} : {}", i, bit);
  }

  println("");

  println("Checking the state of each bit position with mask_bit");
  println("bit0 is {:0b}", static_cast<bool>(var & mask_bit_0));
  println("bit1 is {:0b}", static_cast<bool>(var & mask_bit_1));
  println("bit2 is {:0b}", static_cast<bool>(var & mask_bit_2));
  println("bit3 is {:0b}", static_cast<bool>(var & mask_bit_3));
  println("bit4 is {:0b}", static_cast<bool>(var & mask_bit_4));
  println("bit5 is {:0b}", static_cast<bool>(var & mask_bit_5));
  println("bit6 is {:0b}", static_cast<bool>(var & mask_bit_6));
  println("bit7 is {:0b}", static_cast<bool>(var & mask_bit_7));

  println("");

  //Toggle bits
  //Toggle : var ^ mask

  //Toggle bit 0
  println("Toggle bit 0");
  print("{:<20}", "var : ");
  println("{:08b}", var ^= mask_bit_0);

  //Toggle bit7 
  println("Toggle bit 7");
  print("{:<20}", "var : ");
  println("{:08b}", var ^= mask_bit_7);

  //Toggle multiple bits in one go : the 4 higher bits
  println("Toggle multiple bits in one go : the 4 higher bits");
  var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
  print("{:<20}", "var : ");
  println("{:08b}", var);

  return 0;
}
