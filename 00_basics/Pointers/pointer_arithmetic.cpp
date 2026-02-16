import <print>;

using namespace std;

int main(){

  // Increment/decrement pointer addresses manually
  int scores[10] {11,12,13,14,15,16,17,18,19,20};

  int* p_score {scores};

  println("Values in scores array (p_score pointer increment) : ");

  println("Address : {}, value: {}", static_cast<void*>(p_score), *(p_score));

  ++p_score; // Moves froward by sizeof(int) : 4 bytes
  println("Address : {}, value: {}", static_cast<void*>(p_score), *(p_score));

  ++p_score; // Moves froward by sizeof(int) : 4 bytes
  println("Address : {}, value: {}", static_cast<void*>(p_score), *(p_score));

  println("");

  println("Explicit addition of integer : ");

  p_score = scores; // Reset the pointer to the start of the array

  println("Address after reset: {}, value: {}", static_cast<void*>(p_score), *(p_score));
  println("scores[4] : {}",  *(p_score + 4)); // Moves forward by 4 * sizeof(int)

  // Can use loops to print these things out : easier
  p_score = scores;

  println("");
  println("Pointer arithmetic on p_scores pointer and a for loop: ");
  for (size_t i{0}; i < size(scores); ++i){
    println("Value : {}", *(p_score + i)); // scores[i]
  }


  // Can also do arithmetic on the array name just like any pointer.
  p_score = scores;

  println("");

  println("Pointer arithmetic on array name: ");
  for (size_t i{0} ; i < size(scores) ; ++i){
    println("Value : {}", *(scores + i));
  }

  // Can Print the elements in reverse order
  println("");
  println("Elements in reverse order with decrementing pointer arithmetic: ");
  for ( size_t i{size(scores)}; i > 0; --i){
    println("Value : {}", *(scores + i - 1));
  }

  // Print in reverse order with -- operator on p_score
  println("");
  println("Elements in reverse order -- arithmetic on the p_scores pointer: ");
  p_score = scores + size(scores) - 1;
  for (size_t i{size(scores)}; i > 0; --i){
    println("Value : {}", *(p_score--));
  }

  // Can Print the elements in reverse order with array index
  println("");
  println("Elements in reverse order with array index notation: ");
  for (size_t i{size(scores)}; i > 0; --i){
    println("Value : {}", scores [i-1]);
  }

  p_score = scores;

  scores[0] = 31; // Array index notation
  *(scores + 1) = 32; // Equivalent to scores[1] = 32; Pointer arithmetic on array name
  *(p_score + 2) = 33; // Equivalent to scores[2] = 33; Pointer arithmetic on p_score pointer

  println("");
  println("Printing out the array after modification of 3 first elements: ");
  for ( size_t i{0} ; i < std::size(scores) ; ++i){
    println("Value : {}", scores [i]);
  }

  return 0;
}
