import <print>;

using namespace std;

int main(){
  bool go {true};

  if (int speed {10}; go) {
    println("speed : {}", speed);

    if (speed > 5) {
      println("Slow down!");
    } else {
      println("Good!");
    }
  } else {
    println("speed : {}", speed);
    println("Stop!");
  }

  // println("Out of the if block , speed : ", speed);

  return 0;
}
