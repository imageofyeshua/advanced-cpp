import <print>;

using namespace std;

int main(){

  unsigned short int value {0xff0u};

  println("Size of short int : {} bytes", sizeof(short int));

  println("value in binary : {:016b}", value);

  //Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  println("value in binary : {:016b}", value);

  //Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  println("value in binary : {:016b}", value);

  //Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  println("value in binary : {:016b}", value);

  //Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  println("value in binary : {:016b}", value);

  //Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  println("value in binary : {:016b}", value);

  //Shift right by one bit
  value = static_cast<unsigned short int>(value >> 1);
  println("value in binary : {:016b}", value);

  //Shift by multiple bits in one go
  //Shift right by four bits 
  value = static_cast<unsigned short int>(value >> 4);
  println("value in binary : {:016b}", value);

  println("value in binary : {:016b}", value >> 1);

  return 0;
}
