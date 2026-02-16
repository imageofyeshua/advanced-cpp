import <print>;

using namespace std;

int main(){
  // Declare and initialize pointer
  int* p_number {}; // Will initialize with nullptr
  double*  p_fractional_number{};

  // Explicitly initialize with nullptr
  int* p_number1 {nullptr};
  int* p_fractional_number1 {nullptr};

  // Pointers to different variables are  of the same size
  println("sizeof(int) : {}", sizeof(int)); // 4 
  println("sizeof(double) : {}", sizeof(double)); // 8 
  println("sizeof(double*) : {}", sizeof(double*));
  println("sizeof(int*) : {}", sizeof(int*));
  println("sizeof(p_number1) : {}", sizeof(p_number1));
  println("sizeof(p_fractional_number1) : {}", sizeof(p_fractional_number1));

  // It doesn't matter if you put the * close to data type or to varible name
  int*  p_number2 {nullptr};
  int * p_number3 {nullptr};
  int  *p_number4 {nullptr};

  int* p_number5 {nullptr};
  int* p_number6 {nullptr};
  int other_int_var {};
  int other_int_var6 {};

  println("sizeof(p_number5) : {}", sizeof(p_number5));
  println("sizeof(other_int_var) : {}", sizeof(other_int_var));
  println("sizeof(p_number6) : {}", sizeof(p_number6));
  println("sizeof(other_int_var6) : {}", sizeof(other_int_var6));

  // It is better to separate these declarations on different lines
  int *p_number7{};
  int other_int_var7{};

  // Initializing pointers and assigning them data
  // We know that pointers store addresses of variables
  int int_var {43};
  int *p_int {&int_var}; // The address of operator (&);

  println("Int var : {}", int_var);
  println("p_int (Address in memory)  : {}", static_cast<void*>(p_int));

  // You can also change the address stored in a pointer any time
  int int_var1 {65};
  p_int = &int_var1; // Assign a different address to the pointer
  println("p_int (with different address)  : {}", static_cast<void*>(p_int));

  // Can't cross assign between pointers of different types
  int *p_int1 {nullptr};
  double double_var {33};

  // p_int = &double_var; // Compiler error

  // Dereferencing a pointer : 
  int* p_int2 {nullptr};
  int int_data {56};
  p_int2 = &int_data;

  println("value : {}", *p_int2);

  const char* message {"Hello, Daniel!"};
  println("message: {}", message);

  // Prints out first char of the message
  println("message(pointer address): {}", *message);

  char message1[] {"Hello, Jason!"};
  message1[0] = 'T';
  println("message1 {}", message1);

  return 0;
}
