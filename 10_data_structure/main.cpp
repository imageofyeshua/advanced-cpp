import MathUtils;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main(int argc, char *argv[])
{
  int customer_num = 0;

  println("Guest Number: ");
  cin >> customer_num;
  println("Your input: {}", customer_num);

  string *bread = new string[customer_num];

  for (int i = 0; i < customer_num; i++)
  {
    bread[i] = "Bread_" + to_string(i);
  }

  println("### Bread produced ###");
  for (int i = 0; i < customer_num; i++)
  {
    println("{}", *(bread + i));
  }

  delete[] bread;

  return 0;
}
