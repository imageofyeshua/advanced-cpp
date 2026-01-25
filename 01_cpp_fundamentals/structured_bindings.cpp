import <print>;
import <string>;
using namespace std;

struct Player {
    int id;
    string name;
    double health;
};

int main()
{
  array values{11, 22, 33};
  auto [x, y, z] { values };
  println("x: {}, y: {}, z: {}", x, y, z);

  Player p1{ 1, "Astra", 95.5 };
  auto [player_id, player_name, hp] { p1 };
  println("ID: {}, Name: {}, Health: {}%", player_id, player_name, hp);

  pair myPair{ "Hello", 7 };
  auto [theString, theInt] { myPair };
  println("theString: {}", theString);
  println("theInt: {}", theInt);
}
