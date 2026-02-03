import <print>;

using namespace std;

const unsigned char mask_bit_0 {0b00000001};
const unsigned char mask_bit_1 {0b00000010};
const unsigned char mask_bit_2 {0b00000100};
const unsigned char mask_bit_3 {0b00001000};
const unsigned char mask_bit_4 {0b00010000};
const unsigned char mask_bit_5 {0b00100000};
const unsigned char mask_bit_6 {0b01000000};
const unsigned char mask_bit_7 {0b10000000};

void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3,
    bool flag4, bool flag5, bool flag6, bool flag7){

  println("Flag0 is : {:0b}, do something with it.", flag0);
  println("Flag1 is : {:0b}, do something with it.", flag1);
  println("Flag2 is : {:0b}, do something with it.", flag2);
  println("Flag3 is : {:0b}, do something with it.", flag3);
  println("Flag4 is : {:0b}, do something with it.", flag4);
  println("Flag5 is : {:0b}, do something with it.", flag5);
  println("Flag6 is : {:0b}, do something with it.", flag6);
  println("Flag7 is : {:0b}, do something with it.", flag7);
}

void use_options_v1(unsigned char flags){

  println("Flag0 is : {:0b}, do something with it.", ((flags & mask_bit_0) >> 0));
  println("Flag1 is : {:0b}, do something with it.", ((flags & mask_bit_1) >> 1));
  println("Flag2 is : {:0b}, do something with it.", ((flags & mask_bit_2) >> 2));
  println("Flag3 is : {:0b}, do something with it.", ((flags & mask_bit_3) >> 3));
  println("Flag4 is : {:0b}, do something with it.", ((flags & mask_bit_4) >> 4));
  println("Flag5 is : {:0b}, do something with it.", ((flags & mask_bit_5) >> 5));
  println("Flag6 is : {:0b}, do something with it.", ((flags & mask_bit_6) >> 6));
  println("Flag7 is : {:0b}, do something with it.", ((flags & mask_bit_7) >> 7));
}

int main(){
  use_options_v0(0,0,1,1,1,0,1,0);

  println("----------------------------------------");
  use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);

  return 0;
}
