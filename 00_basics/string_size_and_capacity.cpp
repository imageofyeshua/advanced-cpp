import <string>;
import <print>;

using namespace std;

int main(){

  string str1 {"Hello World"};
  string str2;
  string str3 {};

  // Check string if it is empty
  println("");
  println("### std::string::empty() ###");
  println("str1 is empty : {}", str1.empty());
  println("str2 is empty : {}", str2.empty());
  println("str3 is empty : {}", str3.empty());

  // Check size
  println("");
  println("### std::string::size() ###");
  println("str1 contains {} characters", str1.size());
  println("str2 contains {} characters", str2.size());
  println("str3 contains {} characters", str3.size());

  // Length
  println("");
  println("### std::string::length() ###");
  println("str1 contains {} characters", str1.size());
  println("str2 contains {} characters", str2.size());
  println("str3 contains {} characters", str3.size());

  // max_size : max number of characters a string can have on the system
  string str4 {"Hello Daniel"};
  println("std::string can hold {} characters", str4.max_size());

  // Capacity
  string str5 {"Hello Jason"};
  string str6; // default string capacity = 15
  println("str5 capacity : {}", str5.capacity());
  println("str6 capacity : {}", str6.capacity());

  string str7 {"The sky is so blue, the grass is green. Kids are running all over the place"};
  string str8 {};

  println("str7 size : {}", str7.size());
  println("str7 capacity : {}", str7.capacity());
  println("str8 capacity : {}", str8.capacity());

  // Reserve : Update the capacity
  string str9 {"Hello Issac"};
  println("str9 size : {}", str9.size());
  println("str9 capacity : {}", str9.capacity());

  str9.reserve(100);

  println("str9 after reserve : {}", str9);
  println("str9 size : {}", str9.size());
  println("str9 capacity : {}", str9.capacity());

  // shrink_to_fit
  string str10 {"Hello World"}; // 11
  str10.reserve(100);

  println("str10 size : {}", str10.size());
  println("str10 capacity : {}", str10.capacity());

  str10.shrink_to_fit();

  println("str10 size after shrink : {}", str10.size());
  println("str10 capacity after shrink : {}", str10.capacity());

  return 0;
}
