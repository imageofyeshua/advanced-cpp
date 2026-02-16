import <iostream>;
import <print>;

using namespace std;

int main(){

  int scores[] {1,2,3,4,5,6,7,8,9,10};

  // Printing positions
  println("");
  println("Scores : ");

  for (auto score : scores){
    print("{} ", score);
  }

  println("");

  for (auto& score : scores){
    score = score * 10;
  }

  // Printing after change
  println("");
  println("Scores : ");

  for (auto score : scores){
    print("{} ", score);
  }

  println("");

  return 0;
}
