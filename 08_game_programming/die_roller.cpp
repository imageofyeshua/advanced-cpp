import <print>;
import <cstdlib>;
import <ctime>;

using namespace std;

int main()
{
  // seed random number generator
  srand(static_cast<unsigned int>(time(0)));

  // generate random number
  int randomNumber = rand();

  // get a number between 1 and 6
  int die = (randomNumber % 6) + 1;
  println("You rolled a {}", die);

  return 0;
}
