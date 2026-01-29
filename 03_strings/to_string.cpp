import <print>;
import <string>;

using namespace std;

int main()
{
  long double PI{ 3.14L };
  string s{ to_string(PI) };
  println("PI: {}", s);
}
