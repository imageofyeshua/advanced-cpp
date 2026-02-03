import <print>;

using namespace std;

int main(){

  int max {};

  int a {35};
  int b {200};

  println("");

  /*
  std::cout << "using regular if " << std::endl;
  if(a >  b){
    max = a;
  } else {
    max = b;
  }
  */

  max = (a > b) ? a : b; // Ternary operator
  println("max : {}", max);

  return 0;
}
