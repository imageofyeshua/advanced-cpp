import <print>;
import <typeinfo>;

using namespace std;

int main(){

    int data[5] {1,2,3,3,3};

    for (auto item : data) {
      print("[{}]", item);
    }

    println("");

	  // Declare array
    char message [6]  {"Hello"};

    println("Type of message: {}", typeid(message).name());
  
    // Print out the array through looping
    print("message : ");

    for(auto c : message){
      print("[{}]", c);
    }

    println("");
    
    // Change characters in our array
    message[1] = 'a';

    // Print out the array through looping
    print("message : ");

    for(auto c : message){
      print("[{}]", c);
    }

    println("");
   
    // Will probably print garbage after your char array
    println("message : {}", message);
 
    // If a character array is null terminated, it's called as C-String
    char message1 [] {'H','e','l','l','o','\0'};
    println("message1 : {}", message1);
    println("sizeof(message1) : {}", sizeof(message1));
  
    char message2 [6] {'H','e','l','l','o'};
    println("message2 : {}", message2);
    println("sizeof(message2) : {}", sizeof(message2));

    // Char array should be terminated with null '\0', otherwise garbage chars appear
    char message3 [] {'D','a','n','i','e','l'};
    println("message3 : {}", message3);
    println("sizeof(message3) : {}", sizeof(message3));

    // String literal
    char message4 [] {"Hello"};
    println("message4 : {}", message4);
    println("sizeof(message4) : {}", sizeof(message4));

    // Can't safely print out arrays other than those of characters
    // int numbers [] {1,2,3,4,5};
    // println("numbers: {}", numbers);
    
    return 0;
}
