import <print>;

using namespace std;

int main(){

  // Stack
  // Memory is finite
  // The developer isn't in full control of the memory lifetime
  // Lifetime is controlled by the scope mechanism
  int number {22}; // Stack

  int* p_number = &number;

  println("");
  println("Declaring pointer and assigning address : ");
  println("number : {}", number);
  println("p_number : {}", static_cast<void*>(p_number));
  println("&number : {}", static_cast<void*>(&number));
  println("*p_number : {}", *p_number);


  int * p_number1; // Uninitialized pointer , contains junk address
  int number1 {12};
  p_number1 = &number1; // Make it point to a valid address
  println("");
  println("Uninitialized pointer : ");
  println("*p_number1 : {}", *p_number1);

  // BAD
  // Writing into uninitialized pointer through dereference
  /*
     int *p_number2; // Contains junk address : could be anything
     println("Writing in the 55");
   *p_number2 = 55; // Writing into junk address : BAD!
   println("");
   println("Writing into uninitialized pointer through dereference");
   println("p_number2 : {}", static_cast<void*>(p_number2));
   println("Dereferencing bad memory");
   println("*p_number2 : {}", *p_number2);
   */

  // Initializing pointer to null
  // int *p_number3{nullptr}; // Also works
  int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr, A pointer pointing nowhere
  println("Writting into nullptr memory");
  //*p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH
  println("Done writting");
  println("");
  println("Reading and writting through nullptr : ");
  println("p_number3 : {}", static_cast<void*>(p_number3));
  // println("*p_number3 : {}", *p_number3);// Reading from nullptr BAD, CRASH.

  // Heap
  // Memory is finite
  // The developer is in full control of when memory is allocated & when it's released
  // Lifetime is controlled explicitly through new and delete operators
  // Dynamic heap memory
  int *p_number4 {nullptr};
  p_number4 = new int; 	// Dynamically allocate space for a single int on the heap
                        // This memory belongs to our program from now on. The system
                        // can't use it for anything else, until we return it.
                        // After this line executes, we will have a valid memory location
                        // allocated. The size of the allocated memory will be such that it
                        // can store the type pointed to by the pointer


  *p_number4 = 77; // Writting into dynamically allocated memory
  println("");
  println("Dynamically allocating memory : ");
  println("*p_number4 : {}", *p_number4);

  // Return memory to the OS
  delete p_number4;
  p_number4 = nullptr;

  // It is also possible to initialize the pointer with a valid
  // address up on declaration. Not with a nullptr
  int *p_number5 {new int}; // Memory location contains junk value
  int *p_number6 {new int(22)}; // use direct initialization
  int *p_number7 {new int{23}}; // use uniform initialization

  println("");
  println("Initialize with valid memory address at declaration : ");
  println("p_number5 address : {}", static_cast<void*>(p_number5));
  println("p_number5 value : {}", *p_number5);

  println("p_number6 address : {}", static_cast<void*>(p_number6));
  println("p_number6 value : {}", *p_number6);

  println("p_number7 address : {}", static_cast<void*>(p_number7));
  println("p_number7 value : {}", *p_number7);

  // Remember to release the memory
  delete p_number5;
  p_number5 = nullptr;

  delete p_number6;
  p_number6 = nullptr;

  delete p_number7;
  p_number7 = nullptr;

  // Can reuse pointers
  p_number5 = new int(81);
  println("Reused p_number5 value : {}", *p_number5);

  delete p_number5;
  p_number5 = nullptr;

  // Calling delete twice on a pointer : BAD!
  p_number5 = new int(99);
  println("Reassigned p_number5 value : {}", *p_number5);

  delete p_number5;
  // delete p_number5;
  p_number5 = nullptr;

  println("Program is ending well");
  return 0;
}
