import <print>;

using namespace std;

int main(){

  signed int value1 {10};
  signed int value2 {-300};

  println("value1 : {}", value1)
  println("value2 : {}", value2)
  println"sizeof(value1) : {}", sizeof(value1));
  println"sizeof(value2) : {}", sizeof(value2));

  unsigned int value3 {4};
  //unsigned int value4{-5}; // Compiler error.


  //short and long
  short short_var {-32768} ; //  2 Bytes 
  short int short_int {455} ; // 
  signed short signed_short {122}; //
  signed short int signed_short_int {-456}; // 
  unsigned short int unsigned_short_int {456};

  int int_var {55} ; // 4 bytes
  signed signed_var {66};//
  signed int signed_int {77};//
  unsigned int unsigned_int{77};

  long long_var {88}; // 4 OR 8 Bytes
  long int long_int {33};
  signed long signed_long {44};
  signed long int signed_long_int {44};
  unsigned long int unsigned_long_int{44};

  long long long_long {888};// 8 Bytes
  long long int long_long_int {999};
  signed long long signed_long_long {444};
  signed long long int signed_long_long_int{1234};
  unsigned long long int unsigned_long_long_int{1234};

  println("-------------------------------------");

  println("Short : {}, size: {} bytes", short_var, sizeof(short));
  println("Short Int : {}, size: {} bytes", short_var, sizeof(short int));
  println("Signed Short : {}, size: {} bytes", short_var, sizeof(signed short));
  println("Signed Short Int : {}, size: {} bytes", short_var, sizeof(signed short int));
  println("Unsigned Short Int : {}, size: {} bytes", short_var, sizeof(unsigned short int));

  println("-------------------------------------");

  println("Int : {}, size: {} bytes", short_var, sizeof(int));
  println("Signed : {}, size: {} bytes", short_var, sizeof(signed));
  println("Signed Int : {}, size: {} bytes", short_var, sizeof(signed int));
  println("Unsigned Int : {}, size: {} bytes", short_var, sizeof(unsigned int));

  println("-------------------------------------");

  println("Long : {}, size: {} bytes", short_var, sizeof(long));
  println("Long Int : {}, size: {} bytes", short_var, sizeof(long int));
  println("Signed Long : {}, size: {} bytes", short_var, sizeof(signed long));
  println("Signed Long Int : {}, size: {} bytes", short_var, sizeof(signed long int));
  println("Unsigned Long Int : {}, size: {} bytes", short_var, sizeof(unsigned long int));

  println("-------------------------------------");

  println("Long Long : {}, size: {} bytes", short_var, sizeof(long));
  println("Long Long Int : {}, size: {} bytes", short_var, sizeof(long long int));
  println("Signed Long Long : {}, size: {} bytes", short_var, sizeof(signed long long));
  println("Signed Long Long Int : {}, size: {} bytes", short_var, sizeof(signed long long int));
  println("Unsigned Long Long Int : {}, size: {} bytes", short_var, sizeof(unsigned long long int));

  println("-------------------------------------");

  return 0;
}
