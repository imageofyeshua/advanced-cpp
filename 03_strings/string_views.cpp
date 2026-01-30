import <print>;
import <string>;
import <typeinfo>;
import <string_view>;

using namespace std;

string extractExtension(string_view filename)
{
  // Return a copy of the extension
  return string{ filename.substr(filename.rfind('.')) };
}

int main()
{
  {
    // C++ std::string
    string filename{ R"(c:\temp\my file.ext)" };
    println("C++ string: {}", extractExtension(filename));

    // C-style string
    const char* cString{ R"(c:\temp\my file.ext)" };
    println("C string: {}", extractExtension(cString));

    // String literal
    println("Literal: {}", extractExtension(R"(c:\temp\my file.ext)"));

    // Raw string buffer with given length
    const char* raw{ "text.ext" };
    size_t length{ 8 };
    println("Raw: {}", extractExtension({ raw, length }));
    println("Raw: {}", extractExtension(string_view{ raw, length }));
  }

  {
    // Concatenation with string_view
    string str{ "Daniel" };
    string_view sv{ " Park" };
    // auto result{ str + sv }; // Error, does not compile!
    auto result1{ str + string { sv } };
    println("result1: {}", result1);

    string result2{ str };
    result2.append(sv.data(), sv.size());

    println("result2: {}", result2);
  } 

  {
    // Using the standard user-defined literal sv
    auto sv{ "My string_view"sv };
    println("sv type: {}", typeid(sv).name());
    println("sv: {}", sv);
  }
}
