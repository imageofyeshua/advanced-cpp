import <iostream>;
import <print>;

using namespace std;

int main(){

  // Case1 : Uninitialized pointer
  int * p_number; // Dangling uninitialized pointer

  println("");
  println("Case 1 : Uninitialized pointer");
  // println("p_number : {}", static_cast<void*>(p_number));
  // println("*p_number : {}", *p_number);

  // Case 2 : deleted pointer
  println("");
  println("Case 2 : Deleted pointer");
  int* p_number1 {new int{67}};

  println("*p_number1 (before delete) : {}", *p_number1);

  delete p_number1;

  println("*p_number1 (after delete) : {}", *p_number1);


  // Case 3 : Multiple pointers pointing to same address
  println("");
  println("Case 3 : Multiple pointers pointing to same address");

  int *p_number3 {new int{83}};
  int *p_number4 {p_number3};

  println("p_number3 : {} : {}", static_cast<void*>(p_number3), *p_number3);
  println("p_number4 : {} : {}", static_cast<void*>(p_number4), *p_number4);

  // Deleting p_number3
  delete p_number3;

  // p_number4 points to deleted memory. Dereferncing it will lead to
  // undefined behaviour : Crash/ garbage or whatever
  println("p_number4 (after deleting p_number3) : {} : {}", static_cast<void*>(p_number4), *p_number4);


  // Solution1 : Initialize your pointers immediately upon declaration
  println("");
  println("Solution 1 : ");
  int *p_number5 {nullptr};
  int *p_number6 {new int(87)};

  // Check for nullptr before use

  if (p_number6!= nullptr){
    println("*p_number6 : {}", *p_number6);
  } else {
    println("Invalid address");
  }

  // Solution 2 : 
  // Right after you call delete on a pointer, remember to reset
  // the pointer to nullptr to make it CLEAR it doesn't point anywere
  println("");
  println("Solution 2 : ");
  int *p_number7 {new int{82}};

  // Use the pointer however you want
  println("p_number7 : {} : {}", static_cast<void*>(p_number7), *p_number7);

  delete p_number7;

  p_number7 = nullptr; // Reset the pointer

  // Check for nullptr before use
  if (p_number7!= nullptr){
    println("*p_number7 : {}", *p_number7);
  } else {
    println("Invalid memory access!");
  }

  // Solution 3 
  // For multiple pointers pointing to the same address ,  Make sure there is
  // one clear pointer (master pointer) that owns the memory (responsible for releasing when
  // necessary) , other pointers should only be able to dereference when the master pointer is valid

  println("");
  println("Solution 3 : ");
  int * p_number8 {new int{382}}; // Let's say p_number8 is the master pointer
  int * p_number9 {p_number8};

  // Dereference the pointers and use them
  println("p_number8 : {} : {}", static_cast<void*>(p_number8), *p_number8);

  if (!(p_number8 == nullptr)) { // Only use slave pointers when master pointer is valid
    println("p_number9 : {} : {}", static_cast<void*>(p_number9), *p_number9);
  }

  delete p_number8; // Master releases the memory
  p_number8 = nullptr;

  if (!(p_number8 == nullptr)) { // Only use slave pointers when master pointer is valid
    println("p_number9 : {} : {}", static_cast<void*>(p_number9), *p_number9);
  } else {
    println("WARNING : Trying to use an invalid pointer");
  }

  println("Program is ending well");

  return 0;
}
