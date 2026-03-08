import Utils;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main (int argc, char *argv[]) {
  int a = 100;
  int *b = NULL;
  int *c = NULL;

  b = &a;
  print_number(b);
  print_number(c);
  
  return 0;
}
