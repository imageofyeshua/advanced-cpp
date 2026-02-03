import <print>;
import <typeinfo>;

using namespace std;

int main(){

  // Implicit cast will add up the doubles,
  // then turn result into int for assignment
  double x {12.5};
  double y {34.6};

  int sum = x + y; 

  println("The sum  is : {}", sum);

  // Explicity cast : cast then sum up
  sum = static_cast<int>(x) + static_cast<int>(y) ;
  println("The sum  is : {}", sum);

  // Explicit cast : sum up then cast, same thing as implicit cast
  sum =  static_cast<int> (x + y);
  println("Sum up then cast, result : {}", sum);

  // Old style C-cast
  double PI {3.14};

  // int int_pi = (int)(PI);
  int int_pi = static_cast<int>(PI);
  println("PI : {}", PI);
  println("Pi type: {}", typeid(PI).name());
  println("int_pi : {}", int_pi);
  println("int_pi type: {}", typeid(int_pi).name());

  return 0;
}
