import <iostream>;
import <print>;
import <ctime>;

using namespace std;

int main(){
  //srand() has to run once per program run
  srand(std::time(0)); // Seed

  char prediction0[] {"a lot of kinds running in the backyard!"};
  char prediction1[] {"a lot of empty beer bootles on your work table."};
  char prediction2[] {"you Partying too much with kids wearing weird clothes."};
  char prediction3[] {"you running away from something really scary"};
  char prediction4[] {"clouds gathering in the sky and an army standing ready for war"};
  char prediction5[] {"dogs running around in a deserted empty city"};
  char prediction6[] {"a lot of cars stuck in a terrible traffic jam"};
  char prediction7[] {"you sitting in the dark typing lots of lines of code on your dirty computer"};
  char prediction8[] {"you yelling at your boss. And oh no! You get fired!"};
  char prediction9[] {"you laughing your lungs out. I've never seen this before."};

  bool end {false};

  const int  max_length {15};
  char name[max_length] {};

  println("What's your name dear :");

  cin.getline(name, max_length); // Get input with spaces

  while (!end) {
    println("Oh dear {}, I see", name);

    size_t rand_num = static_cast<size_t>((rand() % 11));

    switch (rand_num) { // [0~10]
      case 0:
        println("{}", prediction0);
        break;
      case 1:
        println("{}", prediction1);
        break;
      case 2:
        println("{}", prediction2);
        break;
      case 3:
        println("{}", prediction3);
        break;
      case 4:
        println("{}", prediction4);
        break;
      case 5:
        println("{}", prediction5);
        break;
      case 6:
        println("{}", prediction6);
        break;
      case 7:
        println("{}", prediction7);
        break;
      case 8:
        println("{}", prediction8);
        break;
      case 9:
        println("{}", prediction9);
        break;
      default:
        println("Hmmm, I don't see anything");
    }
    println("Do you want me to try again ? (Y | N) : ");

    char go_on;
    cin >> go_on;

    end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
  }

  println("That's all I have for you today dear. Best wishes");

  return 0;
}
