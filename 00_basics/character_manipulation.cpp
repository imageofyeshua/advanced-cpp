import <print>;

using namespace std;

int main(){

  // Check if character is alphanumeric
  println("");
  println("std::isalnum : ");

  println("C is alphanumeric : {}", isalnum('C'));
  println("C is alphanumeric : {}", !!isalnum('C'));
  println("^ is alphanumeric : {}", isalnum('^'));
  println("^ is alphanumeric : {}", !!isalnum('^'));

  // Can use this as a test condition
  char input_char {'*'};

  if (isalnum(input_char)){
    println("{} is alhpanumeric.", input_char);
  } else {
    println("{} is not alhpanumeric.", input_char);
  }

  // Check if character is alphabetic
  println("");
  println("std::isalpha : ");
  println("e is alphabetic : {}", !!isalpha('e'));
  println("^ is alphabetic : {}", !!isalpha('^'));
  println("7 is alphabetic : {}", !!isalpha(7));
  println("'7' is alphabetic : {}", !!isalpha('7'));

  if (isalpha('e')){
    println("'e' is alphabetic");
  } else {
    println("'e' is NOT alphabetic");
  }

  //Check if a character is blank
  println("");
  println("std::isblank : ");
  char message[] {"Hello there. How are you doing? The sun is shining."};
  println("message : {}", message);

  //Find and print blank index
  size_t blank_count{};
  for (size_t i{0} ; i < size(message); ++i){
    //std::cout << "Value : " << message[i] << std::endl;
    if(isblank(message[i])){
      println("Found a blank character at index : [{}]",i);
      ++blank_count;
    }
  }
  println("In total we found {} blank characters.", blank_count);

  //Check if character is lowercase or uppercase
  println("std::islower and std::isupper : ");

  println("");
  char thought[] {"The C++ Programming Language is one of the most used on the Planet"};
  size_t lowercase_count{};
  size_t upppercase_count{};

  //Print original string for ease of comparison on the terminal
  println("Original string  : {}", thought);

  for(auto character : thought){
    if (islower(character)) {
      print("{} ", character);
      ++lowercase_count;
    }
    if(isupper(character)){
      print("{} ", character);
      ++upppercase_count;
    }
  }
  println("");
  println("Found {} lowercase characters and {} uppercase characters.", lowercase_count, upppercase_count);

  //Check if a character is a digit
  println("");
  println("std::isdigit : ");

  char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
  println("statement : {}", statement);

  size_t digit_count {};

  for(auto character : statement){
    if(isdigit(character)){
      println("Found digit : {}", character);
      ++digit_count;
    }
  }
  println("Found {} digits in the statement", digit_count);

  //Turning a character to lowercase using the std::tolower() function
  println("");
  println("std::tolwer and std::toupper: ");
  char original_str[] {"Home. The feeling of belonging"};
  char dest_str[size(original_str)];

  //Turn this to uppercase. Change the array in place
  for(size_t i{}; i < size(original_str); ++i){
    dest_str[i] = toupper(original_str[i]);
  }

  println("Original string : {}", original_str);
  println("Uppercase string : {}", dest_str);

  //Turn this to lowercase. Change the array in place
  for(size_t i{}; i < size(original_str); ++i){
    dest_str[i] = tolower(original_str[i]);
  }

  println("Lowercase string : {}", dest_str);
  return 0;
}
