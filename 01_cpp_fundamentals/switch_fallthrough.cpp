import <iostream>;
using namespace std;

int main()
{
  enum class Mode { Default, Custom, Standard };

  int value{ 42 };
  Mode mode{ Mode::Custom };

  cout << "Value Before Switch: " << value << endl;

  switch(mode) {
    using enum Mode;

    case Custom:
      value = 84;
      [[fallthrough]];
    case Standard:
    case Default:
      value *= 2;
      break;
  }

  cout << "Value After Switch: " << value << endl;
}
