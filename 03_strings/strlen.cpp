import <print>;
import <cstring>;

using namespace std;

int main()
{
  char text1[]{ "abcdef" };
  size_t s1{ sizeof(text1) };
  size_t s2{ strlen(text1) };
  println("text1 size: {}", s1);
  println("text1 length: {}", s2);

  const char* text2{ "abcdef" };
  size_t s3{ sizeof(text2) }; // is platform-dependent (e.g. 4 bytes for x86, 8 bytes for x64)
  size_t s4{ strlen(text2) };
  println("text2 size: {}", s3);
  println("text2 length: {}", s4);

}
