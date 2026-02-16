import <print>;

using namespace std;

int main(){

  // Declare pointer and reference
  double double_value {12.34};
  double& ref_double_value {double_value}; // Reference to double_value
  double* p_double_value {&double_value}; //Pointer to double_value

  // Reading
  println("=================================");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  // Writting through pointer
  *p_double_value = 15.44;

  println("=================================");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  // Writting through reference
  ref_double_value = 18.44;

  println("=================================");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  // Make the reference reference something else.
  double some_other_double {78.45};
  ref_double_value = some_other_double;

  println("=================================");
  println("Making the reference reference something else...");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  // Make the pointer point to something else
  p_double_value = &some_other_double;

  println("=================================");
  println("Making the pointer point somewhere else...");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("&double_value : {}", static_cast<void*>(&double_value));
  println("&ref_double_value : {}", static_cast<void*>(&ref_double_value));
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  *p_double_value = 555.5;

  println("=================================");
  println("Changing pointer double value...");
  println("double_value : {}", double_value);
  println("ref_double_value : {}", ref_double_value);
  println("&double_value : {}", static_cast<void*>(&double_value));
  println("&ref_double_value : {}", static_cast<void*>(&ref_double_value));
  println("p_double_value : {}", static_cast<void*>(p_double_value));
  println("*p_double_value : {}", *p_double_value);

  return 0;
}
