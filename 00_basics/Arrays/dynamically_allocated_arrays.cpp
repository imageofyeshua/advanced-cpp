import <iostream>;
import <print>;

using namespace std;

int main(){

  const size_t size{10};

  double *p_salaries {new double[size]};
  int *p_students {new(nothrow) int[size]{} }; // All values initialized to 0 

  double *p_scores {new(nothrow) double[size]{1,2,3,4,5}};

  if (p_scores) {
    println("size of scores (it's a regular pointer) : {}", sizeof(p_scores));
    println("Successfully allocated memory for scores.");

    // Print out elements. Can use regular array access notation, or pointer arithmetic
    for( size_t i{}; i < size ; ++i){
      println("p_scores[{}] : {}, *p_scores + {} : {}", i, p_scores[i], i, *(p_scores + i));
    }
  }

  delete [] p_salaries;
  p_salaries = nullptr;

  delete [] p_students;
  p_students = nullptr;

  delete [] p_scores;
  p_scores = nullptr;

  // Static arrays Vs dynamic arrays
  println("=====================================");

  int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the stack

  println("scores size : {}", std::size(scores));

  for(auto s : scores){
    println("value : {}", s);
  }

  int* p_scores1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the heap.
                                                                // println("p_scores1 size : {}", std::size(p_scores));

  /*
     for(auto s : p_scores1){
     println("value : {}", s);
     }
     */

  return 0;
}
