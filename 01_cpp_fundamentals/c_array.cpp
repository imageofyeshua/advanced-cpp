import <print>;
using namespace std;

int main()
{
  int myArray[3];
  myArray[0] = 0;
  myArray[1] = 0;
  myArray[2] = 0;
  println("myArray[2]: {}", myArray[2]);

  int yourArray[3] = { 0 };
  println("yourArray[2]: {}", yourArray[2]);

  int theirArray[3] = {};
  println("theirArray[2]: {}", theirArray[2]);

  int herArray[3]{};
  println("herArray[2]: {}", herArray[2]);

  int ourArray[]{ 1, 2, 3, 4};
  println("ourArray[2]: {}", ourArray[2]);

  int hisArray[3]{ 2 };
  size_t arraySize1{ size(hisArray) };
  size_t arraySize2{ sizeof(hisArray) / sizeof(hisArray[0]) };
  println("arraySize1: {}, arraySize2: {}", arraySize1, arraySize2);

  char ticTacToeBoard[3][3];
  ticTacToeBoard[1][1] = 'o';
  println("ticTacToeBoard[1][1]: {}", ticTacToeBoard[1][1]);
}
