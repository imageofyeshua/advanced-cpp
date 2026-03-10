import <print>;
import <string>;

using namespace std;

int main(){

  println("=================================");
  // Replacing (1)
  // basic_string& replace( size_type pos, size_type count, const basic_string& str );
  // Replace the range [pos, pos + count] with str
  string str1 {"Finding Nemo"}; // Replace Finding with 'Searching For'
  string str1_2 {"Searcing For"};
  println("str1 : {}", str1);

  println("Replacing...");
  str1.replace(0, 7, str1_2);

  println("str1 : {}", str1);

  println("=================================");
  // Replacing (2)
  // basic_string& replace( size_type pos, size_type count, const basic_string& str,
  // size_type pos2, size_type count2 = npos );
  // Replace in part of str, not its entirety
  string str2 {"Finding Nemo"};
  string str3 {"The Horse was Found in the Fields Searching For Food"};

  println("str2 : {}", str2);

  println("Replacing...");
  str2.replace(0, 7, str3, 34, 13);

  println("str2 : {}", str2);

  println("=================================");
  // Copying
  // size_type copy( CharT* dest,size_type count, size_type pos = 0)
  // Copy a subsection of *this string to dest. Dest is pre-allocated
  // The resulting character string is not null-terminated. Be careful
  string str4 {"Climbing Kilimanjaro"};
  char txt4[15] {}; // Initialized with zero equivalent for characters which is '\0'
  println("std::size(txt4) : {}", size(txt4));
  println("txt4 : {}", txt4);

  println("Copying...");
  str4.copy(txt4, 11, 9);

  // Safe to print because the char array was initialized with '\0' s.
  println("txt4 : {}", txt4);

  println("=================================");
  // Resizing
  // std::resize()
  string str5{"Hello"};

  println("null char : {}", '\0');
  println("str5 : {}", str5);
  println("str5.size() : {}", str5.size());
  println("str5.capacity() : {}", str5.capacity());

  println("Resizing...");
  str5.resize(8); // This fills new char place holders with
                  // null character by default, you can't print and see them
  println("str5 : {}", str5);
  println("str5.size() : {}", str5.size());
  println("str5.capacity() : {}", str5.capacity());

  println("=================================");
  // Prove that they are indeed null characters
  println("Printing through loop : ");
  for(size_t i{} ; i < str5.size() ; ++i){
    println("{} : {}", i, str5[i]);
  }

  println("=================================");
  // Resize and specify autofill character
  println("Resize and specify autofill character : ");
  str5.resize(10, '*');
  println("str5 : {}", str5);
  println("str5.size() : {}", str5.size());
  println("str5.capacity() : {}", str5.capacity());

  println("=================================");
  // Resize down
  println("Resize down : ");
  str5.resize(5);
  println("str5 : {}", str5);
  println("str5.size() : {}", str5.size());
  println("str5.capacity() : {}", str5.capacity());

  println("=================================");
  // Swapping
  string str_a {"This is a string stored in A"};
  string str_b {"This is a string stored in B and it's really great to be able to do that."};

  // Before swap
  println("str_a : {}", str_a);
  println("str_b : {}", str_b);
  println("str_a.size() : {}", str_a.size());
  println("str_a.capaity() : {}", str_a.capacity());
  println("str_b.size() : {}", str_b.size());
  println("str_b.capaity() : {}", str_b.capacity());

  println("=================================");
  println("Swapping...");
  str_a.swap(str_b);

  // After swap
  println("str_a : {}", str_a);
  println("str_b : {}", str_b);
  println("str_a.size() : {}", str_a.size());
  println("str_a.capaity() : {}", str_a.capacity());
  println("str_b.size() : {}", str_b.size());
  println("str_b.capaity() : {}", str_b.capacity());

  return 0;
}
