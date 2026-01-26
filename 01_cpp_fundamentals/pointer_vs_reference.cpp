import <print>;
import <string>;
using namespace std;

int main()
{
  int target = 100;
  int other = 200;

  // --- POINTER ---
  int* ptr = &target; // ptr stores the address of target
  *ptr = 150;         // Memory at address in ptr is changed to 150

  // --- REFERENCE ---
  int& ref = target;  // ref is now an alias for target
  ref = 175;          // target is now 175
  // ref = &other;    // ERROR: you cannot reassign a reference

  println("Target: {}", target);
  println("Pointer points to: {}", *ptr);
  println("Variable target address: {}", static_cast<void*>(&target));
  println("Reference ref address: {}", static_cast<void*>(&ref));
  println("Pointer address: {}", static_cast<void*>(ptr));
}
