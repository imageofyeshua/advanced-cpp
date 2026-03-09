import <print>;
import <string>;

using namespace std;

int main(){
  string str1 {"Hello there"};

  // Size of a string : doesn't count the null terminator
  println("str1.size() : {}", str1.size());

  // Reading characters in std::string : array index operator
  // Regular indexed loop. Can also be adapted to use while and do-while
  // This is left as an exercise.
  println("");
  println("### For loop with array index notation ###");

  println("str1(for loop) : ");
  for(size_t i{}; i < str1.size(); ++i){
    print("{} ", str1[i]);
  }
  println("");

  // Can also use range based for loop
  string str2 {"Hello Daniel"};
  println("");
  println("### Using range based for loop ###");

  println("str2(range based for loop) : ");
  for(char value : str2){
    print("{} ", value);
  }
  println("");

  // at() syntax to target characters
  println("");
  println("### Using the std::string::at() method ###");

  string str3 {"Hello Jason"};
  println("str3 : (for loop with at()) : ");

  for(size_t i{}; i < str3.size(); ++i){
    print("{} ", str3.at(i));
  }
  println("");

  // Modifying with operator[] and at()
  string str4 {"Hello Eunice"};
  str4[0] = 'B';
  str4.at(1) = 'a';
  println("str4(modified) : {}", str4);

  // Getting the front and back characters
  string str5 {"The Abbadon King Lucifer"};    
  char& front_char = str5.front();
  char& back_char = str5.back();
  println("The front char in str5 is : {}", front_char);
  println("The back char in str5 is : {}", back_char);

  front_char = 'S';
  back_char = 'd';

  println("str5(modified) : {}", str5);

  // c_str method
  // doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
  // returns const char * to the wrapped string. You shouldn't use 
  // it to modify data in the string.
  string str6 {"The Bottomless Pit"}; 
  const char *wrapped_c_string = str6.c_str();
  println("str[0] : {}", str6[0]);
  println("Wrapped c string[0] : {}", wrapped_c_string[0]);
  println("str6 address: {}", static_cast<void*>(&str6));
  println("wrapped_c_string address: {}", static_cast<void*>(&wrapped_c_string));
  // wrapped_c_string[0] = 'e'; // Compiler error

  // data()
  string str7 { "Good Bye Abbadon World!!!"};

  char *data = str7.data();
  println("data : {}", data);
  println("str7 address: {}", static_cast<void*>(&str7));
  println("data address: {}", static_cast<void*>(data));

  data[0] = 'B';// This also changes std::string.

  println("data string (after modification) : {}", data);
  println("data original string (after modification ) : {}", str7);

  return 0;
}
