import <print>;

using namespace std;

int main(){

  // Non const reference
  println("");
  println("Non const reference : ");

  int age {27};
  int& ref_age{age};
  // const int& ref_age{age};

  println("age : {}", age);
  println("ref_age : {}", ref_age);

  // Can modify original variable through reference

  println("");
  println("Modify original variable through reference : ");

  ref_age++; // Mofify through reference

  println("age : {}", age);
  println("ref_age : {}", ref_age);

  // Simulating reference behavior with pointers
  // const int * const p_age {&age};
  // *p_age = 45;

  return 0;
}
