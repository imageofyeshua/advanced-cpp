import <print>;

using namespace std;

int main(){

  int scores [] {1,2,5};

  int count {size(scores)}; // std::size( C++17)

  println("sizeof(scores) : {}", sizeof(scores));
  println("sizeof(scores[0]) : {}", sizeof(scores[0]));
  println("count : {}", count);

  int size {sizeof(scores)/sizeof(scores[0])};

  for(size_t i {0} ; i < size ; ++i){
    println("scores [{}] : {}", i,  scores[i]);
  }

  for (auto i : scores){
    println("value: {}", i);
  }

  return 0;
}
