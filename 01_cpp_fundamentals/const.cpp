import <print>;
import <string>;
using namespace std;

const int versionNumberMajor{ 2 };
const int versionNumberMinor{ 1 };
const string productName{ "Transhuman Generation."};
const double PI{ 3.14159265358979323238462 };

void func(const int /*param*/)
{
  // Not allowed to change param...
}

void constIntOne()
{
  const int* ip;
  ip = new int[10];
  // ip[4] = 5; // Error changing after initialization
}

void constIntTwo()
{
  // Same function as above
  int const* ip;
  ip = new int[10];
  // ip[4] = 5; // Error changing after initialization
}

void constPtrOne()
{
  int* const ip{ nullptr };
  // ip = new int[10]; // Doesn't compile!
  ip[4] = 5; // Error: dereferencing a null pointer
}

void constPtrTwo()
{
  int* const ip{ new int[10] };
  ip[4] = 5;
}

void constIntPtrOne()
{
	int const* const ip{ nullptr };
}

void constIntPtrTwo()
{
	const int* const ip{ nullptr };
}

void manyLevelConst()
{
	const int* const* const* const ip{ nullptr };
}


int main()
{
  println("versionNumberMajor: {}", versionNumberMajor);
  println("versionNumberMinor: {}", versionNumberMinor);
  println("productName: {}", productName);
  println("PI: {}", PI);

  int* ip;
  ip = new int[10]{ 5 };
  ip[0] = 7;

  println("first element of array ip: {}", *ip);
}
