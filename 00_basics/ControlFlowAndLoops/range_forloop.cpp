import <print>;

using namespace std;

int main(){

  int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers

  println("Regular For Loop");

  for(size_t i{0}; i < 10; ++i){
    println("value : {}", bag_of_values[i]);
  }

  println("For Loop Interation");

  for (int value : bag_of_values){
    //value holds a copy of the current iteration in the whole bag
    println("value : {}", value);
  }

  println("For Loop from Collection");

  for (int value : {1,2,3,4,5,6,7,8,9,10}){
    //value holds a copy of the current iteration in the whole bag
    println("value : {}", value);
  }

  println("For Loop from Collection with auto");
  for (auto value : {1,2,3,4,5,6,7,8,9,10}){
    //value holds a copy of the current iteration in the whole bag
    println("value : {}", value);
  }

  return 0;
}
