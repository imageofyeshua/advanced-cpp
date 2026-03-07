import MathUtils;
import <print>;
import <chrono>;

using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 2) {
    println("Who are you?");
  } else {
    println("Hello, {}", argv[1]);
  }

  auto now = chrono::system_clock::now();
  println("The current time is: {}", now);

  int num1 {20};
  int num2 {4};

  println("{} + {} = {}", num1, num2, add(num1, num2));
  println("{} - {} = {}", num1, num2, subtract(num1, num2));
  println("{} * {} = {}", num1, num2, multiply(num1, num2));
  println("{} / {} = {}", num1, num2, divide(num1, num2));

  return 0;
}

