import <print>;
import <iostream>;

using namespace std;

int main(){

  // Braced initializers
  // Variable may contain random garbage value . WARNING
  int elephant_count;
  int lion_count{}; //Initializes to zero
  int dog_count {10}; //Initializes to 10
  int cat_count {15}; //Initializes to 15

  // Can use expression as initializer
  int domesticated_animals { dog_count + cat_count };

  // int new_number{doesnt_exist};
  // int narrowing_conversion {2.9};//Compiler error

  std::cout << "Elephant count : " << elephant_count << std::endl;
  std::cout << "Lion count : " << lion_count << std::endl;
  std::cout << "Dog count : " << dog_count << std::endl;
  std::cout << "Cat count : " << cat_count << std::endl;
  std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;

  // Functional Initialization
  int apple_count(5);
  int orange_count(10);
  int fruit_count (apple_count + orange_count);
  // int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

  // Information lost. less safe than braced initializers
  int narrowing_conversion_functional (2.9);


  std::cout << "Apple count : " << apple_count << std::endl;
  std::cout << "Orange count : " << orange_count << std::endl;
  std::cout << "Fruit count : " << fruit_count << std::endl;
  std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;//Will loose info


  // Assignment notation

  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion_assignment = 2.9;

  println("Bike Count: {}", bike_count);
  println("Truck Count: {}", truck_count);
  println("Vehicle Count: {}", vehicle_count);
  println("Narrowing Conversion Assignment: {}", narrowing_conversion_assignment);

  // Check the size with sizeof
  println("Size of int: {}", sizeof(int));
  println("Size of truck_count: {}", sizeof(truck_count));

  return 0;
}
