import <vector>;
import <format>;
import <ranges>;
import <print>;

using namespace std;

//void processVector(const vector<basic_string<char>>& vec)
//{
//	// Body omitted
//}

void processVector(const vector<string>& vec)
{
  for (const auto& str : vec) {
    println("Address: {}, Value: {}", static_cast<const void*>(&str), str);
  }
}

int main()
{
	//vector<basic_string<char>> myVector;
	vector<string> myVector{"Hello", "World", "C++", "Programming"};
	processVector(myVector);
}

