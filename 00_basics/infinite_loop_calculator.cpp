import <print>;
import <iostream>;

using namespace std;

int main(){

  char operation; // +,-,*,/
  double operand1;
  double operand2;
  bool end {false};

  println("Welcome to Awesome Calculator");

  while((end == false)){
    //Do some processing
    println("--------------------------------------------");
    println("What operation do you want help with? ");
    println("+,-,* and / are supported. Please choose one and type below");
    print("Your operation : ");
    cin >> operation;

    println("");

    println("Please type in your two operands separated by a space and hit enter: ");
    cin >> operand1 >> operand2;

    println("");

    switch(operation){
      case '+' : 
        println("{} {} {} = {}", operand1, operation, operand2, (operand1 + operand2));
        break;
      case '-' : 
        println("{} {} {} = {}", operand1, operation, operand2, (operand1 - operand2));
        break;
      case '*' : 
        println("{} {} {} = {}", operand1, operation, operand2, (operand1 * operand2));
        break;
      case '/' : 
        println("{} {} {} = {}", operand1, operation, operand2, (operand1 / operand2));
        break;
      default :
        println("{} operation not supported!!!", operation);
        break;
    }

    println("Continue ? ( Y | N) : ");

    char go_on;
    cin >> go_on;

    end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    /*
    if ((go_on == 'Y') || (go_on == 'y')){
      end = false;
    } else {
      end = true;
    }
    */
  }

  println("Done helping out. BYE!");

  return 0;
}
