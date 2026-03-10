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

  // Compare (1)
  // int compare( const basic_string& str ) const noexcept;(1)
  // Compares this string to str.
  string str1 {"Hello"};
  string str2 {"World"};

  println("str1: {}", str1);
  println("str2: {}", str2);
  println("str1.compare(str2) : {}", str1.compare(str2)); // negative
  println("str2.compare(str1) : {}", str2.compare(str1)); // positive

  //Compare (2)
  //int compare( size_type pos1, size_type count1,const basic_string& str ) const; (2)
  //Compares a  substring  of this string(from pos1, going count1 positions) to str
  string str3 {"Hello"};
  string str4 {"Hello World"};
  println("Comparing 'World' to 'Hello' : {}", str4.compare(6, 5, str3)); // 1

  // Compare (3)
  // int compare( const CharT* s ) const;(4)
  // Compares this string to the null-terminated character sequence beginning 
  // at the character pointed to by s.
  string str5 {"Hello"};
  const char *message {"World"};
  println("Comparing Hello to World : {}", str5.compare(message)); // -1

  return 0;
}
