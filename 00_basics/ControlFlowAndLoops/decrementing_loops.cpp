import <print>;

using namespace std;

int main(){

  println("Incrementing for loop : ");
  for (size_t i{0}; i < 5; ++i){
    println("i : {}", i);
  }

  println("");

  println("Decrementing for loop : ");

  for(size_t i{5}; i > 0; --i){
    println("i : {}", i);
  }

  // Range based for loops can't be made to run in reverse order

  // While loop
  // Incrementing while
  println("");
  println("Incrementing while : ");

  size_t i{0};

  while( i < 5){
    println("i : {}", i);
    ++i;
  }

  // Decrementing while
  println("");
  println("Decrementing while : ");

  i = 5;

  while( i > 0){
    println("i : {}", i);
    --i;
  }

  //Do while loop
  //Incrementing do while
  println("");
  println("Incrementing do while : ");

  i = 0;

  do {
    println("i : {}", i);
    ++i;
  } while (i < 5);

  //Decrementing do while
  println("");
  println("Decrementing do while : ");
  i = 5;

  do {
    println("i : {}", i);
    --i;
  } while (i > 0);


  //Infinite loop
  //Decrementing do while
  /*
  println("Decrementing do while : ");
  unsigned int i {5};

  do {
    println("i : {}", i);
    --i;
  } while (i >= 0);
  */

  return 0;
}
