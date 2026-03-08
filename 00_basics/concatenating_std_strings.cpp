import <iostream>;
import <print>;
import <string>;

using namespace std;

int main(){

  // Concatenating two strings : The + operator
  println("");
  println("### Concatenating two strings ###");

  string str1{"Hello"};
  string str2{"World"};

  string message = str1 + " my " + str2;
  println("message : {}", message);

  // Concatenating string literals : No, No - Compiler Error
  // String literals are expanded into const char* arrays and C++ doesn't know
  // how to add arrays with the + operator. Hence the compiler error.
  println("");
  println("### Concatenating string literals : No,No! Compiler Error ###");

  // std::string str3 { "Hello" + "World"}; // Compiler Error
  // std::string str4 = "Hello" + "World";  // Compiler Error

  // A few ways around string literal concatenation
  println("");
  println("### A few ways around string literal concatenation ###");

  string str5 {"Hello World"}; 	// Make the string one literal in the first place
  string str6 {"Hello" " World"}; // Put the literals side by side without the + between
  string str7 {string{"Hello"} + " World"}; // Turn one or both into a std::string object and concatenate
  println("str5: {}", str5);
  println("str6: {}", str6);
  println("str7: {}", str7);

  // using namespace string_literals; // necessary for the s suffix
  // This polutes the namespace in main
  string str8 {"Hello"s + " World"}; // Turn one or both into strings using the 
                                     // s suffix . the string_literals namespace has to be imported
                                     // for this to work
  println("str8 : {}", str8);

  // A better way to not polute the namespace
  string str9;
  {
    // using namespace string_literals;
    str9 = "Hello"s + " World";
  }
  println("str9 : {}", str9);

  // std::string is a compound type, it has properties and behaviors
  // one of the behaviors is append. We access the behaviors using
  // the . operator after the std::string variable name
  println("");
  println("### Using the append method ###");
  string str10 {"Hello"};
  string str11 {" Jason"};
  string str12 = str10.append(str11);
  println("str12 : {}", str12);

  string str13 {string{"Hello"}.append(" Daniel")};
  println("str13 : {}", str13);


  // Append can do more than the + operator
  // The + operator is just a convenience for basic concatenation
  println("");
  println("### Append method can do more than + operator ###");
  string str14 {"Hello "};
  string str15 {str14.append(5,'?')}; // Appends 5 '?' characters
  println("str15 : {}", str15);


  string str16 {"This world is gonna go away soon!"};
  string str17 {"Hello"};
  string str18 {str17.append(str16, 4, 6)}; // Append a sub-section of another string
                                            // starting from index 4 , 5 characters
  println("str18 : {}", str18);

  // Direct output
  string str19 {"Hello"};
  println("Direct output : {}", str19.append(str16, 4, 6));

  // Concatenating strings and characters
  println("");
  println("### Concatenating strings and characters : ###");
  string str20 {"Hello"};
  string str21 {"World"};
  string str22 {str20 + ' ' + str21}; // The space in between is a character
  println("str22 : {}", str22);

  string str23 = "Hello";
  (str23 += ',') += ' ';
  println("str23 : {}", str23);

  // Another solution
  string str24 = "Hello"; // Take out the , and space we added before.
  string str25 {"I am here to see you."};
  string str26 {str24 + ',' + ' ' + str25};
  println("str26 : {}", str26);

  // Appending C-strings and char arrays
  println("");
  println("### Appending C-Strings and char arrays ###");
  const char message1[] {"World"};
  const char *message2 {"World"};

  println(" + char array : {}", string{"Hello "} + message1);
  println(" + C-String : {}", string{"Hello "} + message2);
  println("append char array : {}", string{"Hello "}.append(message1));
  println("append C-String : {}", string{"Hello "}.append( message2));

  // Concatenating std::strings and numbers
  string str27 {"Hello"};
  str27 += to_string(67.5f); // Treats 67 as a character code
                             // When using the += operator, C++ knows to treat the 
                             // integer operand as a character code and append that to our
                             // std::string. But what if we want the 67 appended to std::string literally
  println("str27 : {}", str27);

  return 0;
}
