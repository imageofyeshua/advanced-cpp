import MathUtils;
import Person;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main(int argc, char *argv[])
{
  Person adult[3] {
    {"Brain", 24, 180, 70},
    {"Jessica", 22, 165, 55},
    {"James", 30, 170, 65},
  };

  check_age(adult, 3);

  return 0;
}
