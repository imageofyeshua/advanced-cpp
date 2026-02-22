import <print>;
import <string>;

using namespace std;

int main(){

  string full_name;//Empty string
  string planet {"Earth. Where the sky is blue"}; //Initialize with string literal
  string prefered_planet {planet}; // Initialize with other existing string
  string message {"Hello there", 5};	// Initialize with part of a string literal.
                                      // Contains hello
  string weird_message(4,'e'); // Initialize with multiple copies of a char
                               // contains eeee
  string greeting {"Hello World"};
  string saying_hello {greeting, 6, 5};//Initialize with part of an existing std::string
                                       // starting at index 6, taking 5 characters.
                                       // Will contain World.

  println("full_name : {}", full_name);
  println("planet : {}", planet);
  println("prefered_planet : {}", prefered_planet);
  println("message : {}", message);
  println("weird_message : {}", weird_message);
  println("greeting : {}", greeting);
  println("saying_hello : {}", saying_hello);

  // Changing std::string at runtime
  planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
  println("planet : {}", planet);

  // Use a raw array
  const char* planet1 {"Earth. Where the sky is blue Earth."};
  planet1 = "Earth. Where the sky is blue, But chemtrail is dominating...";
  println("planet1 : {}", planet1);

  return 0;
}
