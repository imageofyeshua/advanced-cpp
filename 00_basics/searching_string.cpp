import <iostream>;
import <print>;
import <string>;

using namespace std;

int main(){

  // Find(1)
  // std::string::find()
  // size_type find( const basic_string& str, size_type pos = 0 ) const
  // Finds the starting index where the str substring is found in
  // the string where we call the method.
  string string1 {"Our Father in heaven, sanctified be Thy Name..."};
  string search_for {"Name"};

  size_t found_pos = string1.find(search_for);
  println("find('Name') : index [{}]", found_pos);

  //find red
  search_for = "heaven";
  found_pos = string1.find(search_for);
  println("find('heaven') : index [{}]", found_pos);

  //Find something that isn't there
  search_for = "Father";
  found_pos = string1.find(search_for);
  println("find('Father') : index [{}]", found_pos);

  //std::string::npos
  println("npos : {}", string::npos);

  size_t large = -1;
  println("large : {}", large);

  // Using std::string::npos to check if search was successfull or failed
  string string2 {"Thy kingdom come, They will be done on earth as it is in heaven..."};
  search_for = "earth";

  found_pos = string2.find(search_for);
  if (found_pos == string::npos){
    println("Could not find the string 'earth'");
  } else {
    println("'earth' found starting at position : {}", found_pos);
  }

  // Search for chicken and check result against std::string::npos
  search_for = "devil";
  found_pos = string2.find(search_for);

  if (found_pos == string::npos){
    println("Could not find the string 'devil'");
  } else {
    println("'devil' found starting at position : {}", found_pos);
  }

  // Find(2)	
  // Can specify the position where we want the search to start
  // using the second parameter of the method
  string string3 {"Amen, Lord Yeshua, Come!"};
  search_for = "Yeshua";

  found_pos = string3.find(search_for); 
  println("Yeshua found at position : {}", found_pos);

  found_pos = string3.find(search_for, 0); 
  println("Yeshua found at position : {}", found_pos);

  found_pos = string3.find(search_for, 10); 
  println("Yeshua found at position : {}", found_pos);

  // Find(3)
  // size_type find( const CharT* s, size_type pos = 0 ) const;
  // Finds the first substring equal to the character string pointed to by s
  // pos : the position where we start searching in the std::string

  string string4 {"Give us this day our daily bread..."};
  const char * c_string4 {"bread"};

  found_pos = string4.find(c_string4, 2);
  if (found_pos != string::npos){
    println("{} found at position : {}", c_string4, found_pos);
  } else {
    println("Could not find the string : {}", c_string4);
  }

  return 0;
}
