import <ctime>;
import <cstdlib>;
import <print>;

using namespace std;

int main(){

  srand(std::time(0)); // Seed

  int random_num {rand()};

  println("random_num: {}", random_num);

  random_num = rand();
  println("random_num: {}", random_num);

  // Generate random numbers in a loop
  for(size_t i {0} ; i < 20 ; ++i){
    random_num = rand();
    println("random_num: {}", random_num);
  }

  // Generate a range between 0 and 10
  for(size_t i {0} ; i < 20 ; ++i){
    random_num = rand() % 11; // [0 ~ 10]
    println("random_num: {}", random_num);
  }

  random_num = rand() % 10 + 1 ; // [1~10]
  for(size_t i {0} ; i < 20 ; ++i){
    random_num = rand() % 10 + 1;
    println("{} : {}", i, random_num); // 0 ~ RAND_MAX       
  }

  return 0;
}
