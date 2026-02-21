import <print>;
import <cstring>;

using namespace std;

int main(){
  // std::strlen : Find the length of a string
  // real arrays and those decayed into pointers
  const char message1 [] {"The sky is blue."};

  // Array decays into pointer when we use const char*
  const char* message2 {"The sky is blue."};

  println("message1 : {}", message1);

  // strlen ignores null character
  println("strlen(message1) : {}", strlen(message1));

  // Includes the null character
  println("sizeof(message1) : {}", sizeof(message1));

  // strlen still works with decayed arrays
  println("strlen(message2) : {}", strlen(message2));

  // Prints size of pointer
  println("sizeof(message2) : {}", sizeof(message2));

  // std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
  // Returns negative value if lhs appears before rhs in lexicographical order,
  // Zero if lhs and rhs compare equal.
  // and Positive value if lhs appears after rhs in lexicographical order. 
  println("");
  println("std::strcmp : ");
  const char* string_data1 {"Alabama"};
  const char* string_data2 {"Blabama"};

  char string_data3[] {"Alabama"};
  char string_data4[] {"Blabama"};

  // Print out the comparison
  println("std::strcmp [{}]:[{}] = {}", string_data1, string_data2, strcmp(string_data1, string_data2));
  println("std::strcmp [{}]:[{}] = {}", string_data3, string_data4, strcmp(string_data3, string_data4));

  string_data1 = "Alabamb";
  string_data2 = "Alabama";

  //string_data3 = "Alabama";
  //string_data4 = "Alabamb";

  // Print out the comparison
  println("std::strcmp [{}]:[{}] = {}", string_data1, string_data2, strcmp(string_data1, string_data2));

  string_data1 = "Alabama";
  string_data2 = "Alabama";

  //Print out the comparison
  println("std::strcmp [{}]:[{}] = {}", string_data1, string_data2, strcmp(string_data1, string_data2));

  string_data1 = "India";
  string_data2 = "France";

  //Print out the comparison
  println("std::strcmp [{}]:[{}] = {}", string_data1, string_data2, strcmp(string_data1, string_data2));

  string_data1 = "Kigali";
  string_data2 = "Kigali";

  // std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count );
  // Compares n characters in the strings
  // Returns : Negative value if lhs appears before rhs in lexicographical order.
  // Zero if lhs and rhs compare equal, or if count is zero.
  // Positive value if lhs appears after rhs in lexicographical order. 
  // Print out the comparison

  const char* string_data5 {"Seoul"};
  const char* string_data6 {"Teoul"};
  size_t n {3};
  println("");
  println("std::strncmp : ");
  println("std::strncmp [{}]:[{}]:[{}] = {}", string_data5, string_data6, n, strncmp(string_data5, string_data6, n));

  string_data5 = "aaaia";
  string_data6 = "aaance";

  println("std::strncmp [{}]:[{}]:[{}] = {}", string_data5, string_data6, n, strncmp(string_data5, string_data6, n));

  n = 5;

  println("std::strncmp [{}]:[{}]:[{}] = {}", string_data5, string_data6, n, strncmp(string_data5, string_data6, n));

  string_data5 = "aaaoa";
  string_data6 = "aaance";

  println("std::strncmp [{}]:[{}]:[{}] = {}", string_data5, string_data6, n, strncmp(string_data5, string_data6, n));

  // Find the first occurrence of a character 
  // CODE FROM THE DOCS : 
  println("");
  println("std::strchr : ");
  // doc : https://en.cppreference.com/w/cpp/string/byte/strchr
  // we use std::strchr to find all the characters one by one.

  const char * const str {"Try not. Do, or do not. There is no try."};
  // Can make this a const pointer to prevent users from making it point somewhere else
  char target = 'T';
  const char *result = str;
  size_t iterations {};

  while ((result = strchr(result, target)) != nullptr) {
    println("Found {} starting at {}", target, result);

    // Increment result, otherwise we'll find target at the same location
    ++result;
    ++iterations;
  }
  println("iterations : {}", iterations);

  // A lesser version that will loop 25 times
  // Find the first occurrence of a character 
  // CODE FROM THE DOCS : 
  println("");
  println("std::strchr : ");
  //doc : https://en.cppreference.com/w/cpp/string/byte/strchr
  //we use std::strchr to find all the characters one by one.

  const char* str2 { "Try not. Do, or Do not. There is no try." };
  char target2 = 'T';
  const char* result2 { nullptr };
  size_t iterations2 {};

  while ((result2 = strchr(str2, target2)) != nullptr) {
    println("Found {} starting at {}", target2, result2);

    // Increment result, otherwise we'll find target at the same location
    ++str2; // Making the pointer point to the next character
    ++iterations2;
  }
  println("iterations2 : {}", iterations2);

  // Find last occurence
  // CODE STOLEN FROM THE DOCS : 
  println("");
  println("std::strrchr : ");
  // doc : https://en.cppreference.com/w/cpp/string/byte/strrchr

  char input[] = "/home/user/hello.cpp";
  char* output = std::strrchr(input, '/');
  if(output)
    println("{}", output+1); //+1 because we want to start printing past 
                                        // the character found by std::strrchr.
  return 0;
}
