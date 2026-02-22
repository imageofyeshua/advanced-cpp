import <print>;
import <cstring>;

using namespace std;

int main(){

  // Concatenation
  println("");
  println("std::strcat : ");
  // doc : https://en.cppreference.com/w/cpp/string/byte/strcat

  char dest[50] {"Hello "};
  char src[50] {"World!"};
  strcat(dest, src); // Some compilers (MSVC) think these functions are unsafe!
  println("dest : {}", dest);
  strcat(dest, " Goodbye World!");
  println("dest : {}", dest);

  // More concatenation
  println("");
  println("More std::strcat : ");

  char *dest1 = new char[30] {'F','i','r','e','l','o','r','d','\0'};
  char *source1 = 
    new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};

  // NOTE TO SELF : 
  // Describe what's going to happen in std::strcat before you do the cat :
  // source is going to be appended to dest, and the process
  // will start by overriding the null character in dest

  println("std::strlen(dest1) : {}", strlen(dest1));
  println("std::strlen(source1) : {}", strlen(source1));

  println("Concatenating...");
  strcat(dest1, source1);

  println("std::strlen(dest1) : {}", strlen(dest1));
  println("dest1 : {}", dest1);

  // std::strncat  : concatenates n characters from src to dest and
  // returns a pointer to the result string
  // signature : char *strncat( char *dest, const char *src, std::size_t count );
  println("");
  println("std::strncat: ");
  char dest2[50] {"Hello"};
  char source2[30] = {" There is a bird on my window"};

  // You can even use the returned pointer immediately for print out
  // This is a pattern you'll see a lot in C++ code out there.
  println("{}", strncat(dest2, source2, 6));

  // Or you can do std::strncat separately and print dest2
  strncat(dest2, source2, 6);
  println("The concatenated string is : {}", dest2);

  // std::strcpy - signature : char* strcpy( char* dest, const char* src );
  println("");
  println("std::strcpy : ");
  const char* source3 {"C++ is a multipurpose programming language."};
  char *dest3 {new char[strlen(source3) + 1]};// +1 for the null character, contains garbage data

  strcpy(dest3, source3);

  println("sizeof(dest3) : {}", sizeof(dest3));
  println("std::strlen(dest3) : {}", strlen(dest3));
  println("dest3 : {}", dest3);

  // std::strncpy : Copy n characters from src to dest -
  // signature : char *strncpy( char *dest, const char *src, std::size_t count );
  println("");
  println("std::strncpy: ");
  const char* source4 {"Hello"};
  char dest4[] {'a', 'b', 'c', 'd', 'e', 'f','\0'}; // Have to put the terminating null char if we want to print

  println("dest4 : {}", dest4);

  println("Copying...");
  strncpy(dest4, source4, 5);

  println("dest4 : {}", dest4);

  return 0;
}
