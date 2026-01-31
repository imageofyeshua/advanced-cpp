import <print>;
import <iostream>;
import <string>;
import <string_view>;

using namespace std;

string replace(const string& haystack, const string& needle, const string& replacement)
{
  // Make a copy of the haystack.
  string result{ haystack };

  // Find all needles and replace them with the replacement string.
  auto position{ result.find(needle) };
  while (position != string::npos) {
    result.replace(position, needle.length(), replacement);
    position = result.find(needle, position + replacement.size());
  }

  return result;
}

int main()
{
  string haystack;
  print("Enter source string: ");
  getline(cin, haystack);

  string needle;
  print("Enter string to find: ");
  getline(cin, needle);

  string replacement;
  print("Enter replacement string: ");
  getline(cin, replacement);

  string result{ replace(haystack, needle, replacement) };

  println("Haystack: {}", haystack);
  println("Needle: {}", needle);
  println("Replacement: {}", replacement);
  println("Result: {}", result);
 }

