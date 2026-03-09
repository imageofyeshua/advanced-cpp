import <string>;
import <cstring>;
import <print>;

using namespace std;

int main(){

  string hello_str {"Hello"};
  string bello_str {"Bello"};

  // Using the comparison operators
  println("");
  println("### Comparing with comparison operators ###");

  println("{} == {} : {}", hello_str, bello_str, (hello_str == bello_str));
  println("{} != {} : {}", hello_str, bello_str, (hello_str != bello_str));
  println("{} > {} : {}", hello_str, bello_str, (hello_str > bello_str));
  println("{} >= {} : {}", hello_str, bello_str, (hello_str >= bello_str));
  println("{} < {} : {}", hello_str, bello_str, (hello_str < bello_str));
  println("{} <= {} : {}", hello_str, bello_str, (hello_str <= bello_str));

  // Can even compare std::strings to C-strings
  const char *c_string1 {"Bello"};
  hello_str = "Hello";

  println("hello_str.size() : {}", hello_str.size());
  println("std::strlen(c_string1) : {}", strlen(c_string1));
  println("{} == {} : {}", hello_str, c_string1, (hello_str == c_string1));
  println("{} == {} : {}", c_string1, hello_str, (c_string1 == hello_str));
  println("{} >= {} : {}", c_string1, hello_str, (c_string1 >= hello_str));
  println("{} < {} : {}", c_string1, hello_str, (c_string1 < hello_str));

  // Be careful about char arrays not terminated with null character
  hello_str = "hello";
  // const char hello_char_array[] {'h','e','l','l','o'}; 
  // The compiler is going to read past the string until it sees a null character 
  // consider that end of the string. Your comparisons may give erroneous results

  const char hello_char_array[] {'h','e','l','l','o','\0'}; //It works right if you put the '\' yourself
  println("{} == {} : {}", hello_str, hello_char_array, (hello_str == hello_char_array));

  return 0;
}
