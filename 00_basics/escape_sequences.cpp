import <print>;

using namespace std;

int main(){

  for(size_t i{0}; i < 10; i++){
    print("Hello\n");
  }

  println("He said \"Get out of here immediately!\"");

  string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries"};
  string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
  string linux_path {"/home/username/files/hello.txt"};
  string hint {" \"\\\\\" escapes a backslash character like \\."};

  println("todo_list : ");
  println("{}", todo_list);
  println("windows_path : {}", windows_path);
  println("linux_path : {}", linux_path);
  println("hint : {}", hint);

  println("\a");

  return 0;
}
