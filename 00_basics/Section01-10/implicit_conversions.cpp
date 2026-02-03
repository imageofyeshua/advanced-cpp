import <print>;
import <typeinfo>;

using namespace std;

int main(){

  //		  The compiler applies implicit conversions
  // 			when types are different in 
  //			an expression
  //		  Conversions are always done from the smallest
  //			to the largest type in this case int is 
  //			transformed to double before the expression
  //			is evaluated.Unless we are doing an assignment

  double price {45.6};
  int units {10};

  auto total_price = price * units; // units will be implicitly converted to double

  println("Total price : {}", total_price);
  println("Sizeof total_price : {} bytes", sizeof(total_price));
  println("total_price typeinfo : {}", typeid(total_price).name());

  // Implicit conversions in assignments
  // The assignment operation is going to cause an implicit
  // narrowing conversion , y is converted to int before assignment
  int x;
  double y {45.44};
  x = y; // double to int
  println("The value of x is : {}", x);
  println("Sizeof x : {} bytes", sizeof(x));

  return 0;
}
