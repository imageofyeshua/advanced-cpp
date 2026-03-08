import MathUtils;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main(int argc, char *argv[])
{
  /*
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
  */

  int a {3}, b {-3};

  println("a: {}, b: {}", a, b);

  change_negative(&a);
  change_negative(&b);

  println("a: {}, b: {}", a, b);

  int scores[5] {90, 56, 100, 65, 80};
  println("Average: {}", average(scores, 5)); // *scores also works

  return 0;
}
