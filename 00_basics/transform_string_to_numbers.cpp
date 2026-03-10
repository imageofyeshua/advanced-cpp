import <iostream>;
import <print>;
import <string>;

using namespace std;

int main(){

  // Number to String : the std::to_string function.
  float float_var {22.3f};
  double double_var {1.34847e5};
  int int_var {223};

  string float_str {to_string(float_var)};
  string double_str {to_string(double_var)};;
  string int_str {to_string(int_var)};

  println("===============================");
  println("size of float_str : {}", float_str.size());
  println("float_var : {}", float_var);
  println("float_str : {}", float_str);

  println("===============================");
  println("size of double_str : {}", double_str.size());
  println("double_var : {}", double_var);
  println("double_str : {}", double_str);

  println("===============================");
  println("size of int_str : {}", int_str.size());
  println("int_var : {}", int_var);
  println("int_str : {}", int_str);

  // std::string to number (integral types)
  // int, long , long long
  // std::stoi, std::stol, std::stoll
  string number_str {"34.567"}; //Could even be negative

  println("===============================");
  int int_var2 = stoi(number_str);
  println("int_var2 : {}", int_var2);
  println("sizeof(int_var2) : {}", sizeof(int_var2));

  println("===============================");
  long long_var = stol(number_str);
  println("long_var : {}", long_var);
  println("sizeof(long_var) : {}", sizeof(long_var));

  println("===============================");
  long long long_long_var = stoll(number_str);
  println("long_long_var : {}", long_long_var);
  println("sizeof(long_long_var) : {}", sizeof(long_long_var));

  // unsigned long , unsigned long long
  // std::stoul, std::stoull
  // Underflows when the std::string contains a negative number
  // std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
  // and become huge numbers of their type
  println("");
  println("### unsigned long, unsigned long long ###");

  println("===============================");
  unsigned long unsigned_long_var = stoul(number_str);
  println("unsigned_long_var : {}", unsigned_long_var);
  println("sizeof(unsigned_long_var) : {}", sizeof(unsigned_long_var));

  println("===============================");
  unsigned long long unsigned_longlong_var = stoull(number_str);
  println("unsigned_longlong_var : {}", unsigned_longlong_var);
  println("sizeof(unsigned_longlong_var) : {}", sizeof(unsigned_longlong_var));

  // float, double,long double : 
  // std::stof, std::stod, std::stold

  println("===============================");
  float float_var2 = stof(number_str);
  println("float_var : {}", float_var2);
  println("sizeof(float_var2) : {}", sizeof(float_var2));

  println("===============================");
  double double_var2 = stod(number_str);
  println("double_var : {}", double_var2);
  println("sizeof(double_var2) : {}", sizeof(double_var2));

  println("===============================");
  long double long_double_var = stold(number_str);
  println("long_double_var : {}", long_double_var);
  println("sizeof(long_double_var) : {}", sizeof(long_double_var));

  return 0;
}
