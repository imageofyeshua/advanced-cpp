import <print>;
import <string>;

using namespace std;

int main(){
  // Clear : Removes all characters from the string.
  string str1 {"The Lion Dad"};

  println("str1 is : {}", str1);
  println("str1 size : {}", str1.size());
  println("str1 capacity : {}", str1.capacity());

  str1.clear();

  println("");
  println("str1 after clear() is : {}", str1);
  println("str1 after clear() size : {}", str1.size());
  println("str1 after clear() capacity : {}", str1.capacity());

  // Insert (1)
  // (1)basic_string& insert( size_type index, size_type count, CharT ch );
  // Inserts count characters in the string starting at index index
  string str2 {"122"};
  println("str2 is : {}", str2);

  str2.insert(1, 4,'3'); //Count can be 1,2,5,..

  println("");
  println("str2 is : {}", str2);

  // Insert (2)
  // (2)basic_string& insert( size_type index, const CharT* s );
  // Inserts null-terminated character string pointed to by s
  // at the position index. The length of the string is determined 
  // by the first null character.
  string str3 {"Hello!"};
  const char *txt3 {" Daniel"};

  println("str3 is : {}", str3);

  str3.insert(5, txt3);

  println("");
  println("str3 is : {}", str3);

  // Insert (3)
  // (3)basic_string& insert( size_type index, const CharT* s, size_type count );
  // Inserts the characters in the range [s, s+count) at the position index.
  // The range can contain null characters.
  string str4{"Hello!"};
  const char *txt4 {" Jason, Eunice and Issac!"};

  println("str4 is : {}", str4);

  str4.insert(5, txt4, 14);

  println("");
  println("str4 is : {}", str4);

  // Insert (4)
  // (4)basic_string& insert( size_type index, const basic_string& str );
  // Inserts string str at the position index
  string str5{" John"};
  string str6{"Hello!"};

  println("str6 is : {}", str6);

  str6.insert(5, str5);

  println("");
  println("str6 is : {}", str6);

  // Insert (5)
  // (5)basic_string& insert( size_type index, const basic_string& str,
  //                          size_type index_str, size_type count = npos );
  // Inserts a string, obtained by str.substr(index_str, count) at the position index
  string str7 {"Hello!"};
  string str8 {"Statistical Analysis of the World Population."};

  println("str7 is : {}", str7);

  str7.insert(5, str8, 27, 6);

  println("");
  println("str7 is : {}", str7);

  // Erase
  // basic_string& erase( size_type index = 0, size_type count = npos );
  // Starting at index index, erase count characters from the string
  // Notice that this function returns a referennce
  string str9 {"Hello World is a message used to start off things when learning programming!"};;

  str9.erase(11, str9.size() - 12);
  println("str9 is : {}", str9);

  // Reset str9.
  str9 = "Hello World is a message used to start off things when learning programming!";

  // Direct print out, because this method returns a reference to the modified string
  println("str9 : {}", str9.erase(11,str9.size() - 12));

  // push_back
  // void push_back( CharT ch );
  // Appends the given character ch to the end of the string. 
  string str10 {"Hello World"};
  str10.push_back('!');
  println("str10 is : {}", str10);

  // pop_back
  // void pop_back();
  // Removes the last character from the string. 
  string str11 {"Hello World!!"};
  str11.pop_back();
  println("str11 is : {}", str11);

  return 0;
}
