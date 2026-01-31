import <vector>;
import <print>;

using namespace std;

void showVector(const vector<int>& vec) {
  print("[");

  bool first = true;
  for (const int& val : vec) {
    if (!first) {
      print(", ");
    }
    print("{}", val);
    first = false;
  }
  println("]");
}

int main()
{
	// Create a vector of integers
	vector<int> myVector{ 11, 22 };
	// vector myVector { 11, 22 };  // Using CTAD

	// Add some more integers to the vector using push_back()
	myVector.push_back(33);
	myVector.push_back(44);

	// Access elements
	println("1st element: {}", myVector[0]);
	println("myVector size: {}", myVector.size());
	print("myVector content: "); 
  showVector(myVector);

}

