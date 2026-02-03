import<print>;

using namespace std;

int main(){

  // for loop : the good way
  for(unsigned int i{0}; i < 10; ++i) {
    println("{} : I love C++", i);
  }
  println("Loop done!");

  // sizeof(size_t)
  println("sizeof(size_t) : {}", sizeof(size_t));

  for(size_t i{0} ; i < 10 ; ++i){
    println("{} : I love C++", i);
  }
  println("Loop done!");

  for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
    println("i: {}, x: {}, y : {}", i, x, y);
  }

  return 0;
}
