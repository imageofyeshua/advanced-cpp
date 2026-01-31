import <vector>;
import <print>;
import <iostream>;
import <utility>;
import <typeinfo>;

using namespace std;

void showVector(const auto& vec) {
  print("[");

  bool first = true;
  for (const auto& val : vec) {
    if (!first) {
      print(", ");
    }
    print("{}", val);
    first = false;
  }
  println("]");
}

void showNestedVector(const auto& matrix) {
  print("[\n");

  for (size_t i = 0; i < matrix.size(); ++i) {
    print("  [");
    for (size_t j = 0; j < matrix[i].size(); ++j) {
      print("{}", matrix[i][j]);
      if (j < matrix[i].size() - 1) {
        print(", ");
      }
    }
    print("]");
    
    if (i < matrix.size() - 1) {
      print(",\n");
    } else {
      print("\n");
    }
  }

  println("]");
}

int main()
{
  // Create a vector of integer
  vector myVector{ 11, 22, 33 };

  // Add some more integers to the vector using push_back()
  myVector.push_back(44);
  myVector.push_back(55);
  myVector.push_back(66);

  // Access elements
  println("myVector type: {}", typeid(myVector).name());
  println("1st element: {}", myVector[0]);
  println("myVector size: {}", myVector.size());
  print("myVector content: "); 
  showVector(myVector);

  vector strings{ "Hello"s, "Daniel!\t2025"s };
  println("String type: {}", typeid(strings).name());
  print("Strings: " );
  showVector(strings);

  vector myDouble{ 3.14, 2.78, 1.22 };
  println("myDouble type: {}", typeid(myDouble).name());
  print("Double: " );
  showVector(myDouble);

  vector chars{ 'D', 'a', 'n', 'i', 'e', 'l' };
  println("char type: {}", typeid(chars).name());
  print("chars: " );
  showVector(chars);

  pair<int, char> p{ 11, 'Z' };
  println("pair type: {}", typeid(p).name());
  println("{}:{}", p.first, p.second);

  vector nested{ vector{11, 22, 33}, vector{44, 55, 66}, vector{77, 88, 99} };
  println("nested type: {}", typeid(nested).name());
  showNestedVector(nested);
}

