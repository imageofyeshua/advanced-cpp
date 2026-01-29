import <print>;
import <string>;

using namespace std;

int main()
{
  const string toParse{ "    123USB" };
  size_t index{ 0 };
  int value{ stoi(toParse, &index) };
  println("Parsed value: {}", value);
  println("First non-parsed character: '{}'", toParse[index]);
  println("Non-parsed character index: {}", index);
}
