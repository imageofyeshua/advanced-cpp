import <iostream>;
import <print>;
import <string>;

using namespace std;

int main(){
  // The bad way to do things
  string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries"};
  string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
  string linux_path {"/home/username/files/hello.txt"};
  string hint {" \"\\\\\" escapes a backslash character like \\."};

  println("=================================");
  println("todo_list : ");
  println("{}", todo_list);
  println("windows_path : {}", windows_path);
  println("linux_path : {}", linux_path);
  println("hint : {}", hint);

  // Use raw string literals
  string to_do_list {R"(      Clean the house
      Walk the dog
      Do laundry
      Pick groceries)"};

  println("=================================");
  println("to_do_list : ");
  println("{}", to_do_list);

  // Raw string literals with assignments
  string to_do_list2 =   R"(
  Clean the house
  Walk the dog
  Do Laundry
  Pick groceries
  )";

  println("=================================");
  println("to_do_list2 : ");
  println("{}", to_do_list2);

  // Raw string literals with initialization
  const char *c_string {  R"(
  Clean the house
  Walk the dog
  Do Laundry
  Pick groceries
  )"} ;

  println("=================================");
  println("to_do_list2 : ");
  println("{}", c_string);

  // Fixing other escaped strings
  string windows_path1 {R"(D:\sandbox\testProject\hello.txt)"};
  string linux_path1 {R"(/home/username/files/hello.txt)"};
  string hint1 {R"("\\" escapes a backslash character like \.)"};	

  println("=================================");
  println("windows_path1 : {}", windows_path1);
  println("linux_path1 : {}", linux_path1);
  println("hint1 : {}", hint1);

  // Problematic raw string literals
  string sentence {R"---(The message was "(Stay out of this!)")---"};

  println("sentence : {}", sentence);

  return 0;
}
