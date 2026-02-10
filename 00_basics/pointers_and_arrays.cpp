import <print>;

using namespace std;

int main(){

  int scores[10] {11,12,13,14,15,16,17,18,19,20};

  int* p_score {scores};

  // Print the address
  println("scores: {}", static_cast<void*>(scores));
  println("p_score: {}", static_cast<void*>(p_score));
  println("&scores[0] : {}", static_cast<void*>(&scores[0]));

  // Print the content at that address
  println("");
  println("Printing out data at array address : ");
  println("*scores : {}", *scores);
  println("scores[0] : {}", scores[0]);
  println("*p_score : {}", *p_score);
  println("p_score[0] : {}", p_score[0]);

  // Differences
  int number {21};
  p_score = &number;

  // scores = &number; 
  // The array name is a pointer, but a special pointer that kind of identifies
  // the entire array. You'll get the error  : incompatible types in assignment
  // of 'int*' to 'int[10]'

  println("p_score: {}", static_cast<void*>(p_score));

  //std::size() doesn't work for raw pointers
  println("scores size : {}", size(scores));
  // println("p_score size : {}", size(p_score)); // Compiler error.

  return 0;
}
