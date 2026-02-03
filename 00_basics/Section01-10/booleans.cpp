import <print>;

using namespace std;

int main()
{

  bool red_light {false};
  bool green_light {true};

  if(red_light == true){
    println("Stop! You Stupid...");
  } else {
    println("Hurry up! man...");
  }

  if(green_light){
    println("Green Light!!!");
  } else {
    println("Not Green Yo!!!");
  }

  println("-----------------------------");

  //sizeof()
  println("Bool Size : {}", sizeof(bool));

  //Printing out a bool
  //1 -->> true
  //0 -->> false
  println("Red Light : {}", int(red_light));
  println("Green Light : {}", int(green_light));

  println("Red Light : {}", red_light);
  println("Green Light : {}", green_light);

  return 0;
}
