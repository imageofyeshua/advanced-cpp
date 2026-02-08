import <print>;
import <iostream>;

using namespace std;

int main()
{
  int score {0};
  double distance {1200.76};
  char playAgain {'y'};
  bool shieldsUp {true};
  short lives {3};
  short aliensKilled {10};
  double engineTemp {6572.89};

  println("score: {}", score);
  println("distance: {}", distance);
  println("playAgain: {}", playAgain);
  println("shieldsUp: {}", shieldsUp);
  println("lives: {}", lives);
  println("aliensKilled: {}", aliensKilled);
  println("engineTemp: {}", engineTemp);

  int fuel;
  println("How much fuel?") ;
  cin >> fuel;
  println("fuel: {}", fuel);

  typedef unsigned short int ushort;
  ushort bonus = 10;
  println("bonus: {}", bonus);

  const int ALIEN_POINTS = 150;
  score = aliensKilled * ALIEN_POINTS;
  println("score: {}", score);

  enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
  difficulty myDifficulty = EASY;

  enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
  shipCost myShipCost = BOMBER_COST;
  println("To upgrade my ship to a Cruiser will cost : {} Resource Points.\n", (CRUISER_COST - myShipCost));

  return 0;
}
