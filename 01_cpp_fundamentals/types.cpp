import <iostream>;
import <string>;
using namespace std;

int main()
{
	int i1{ -7 };
	signed int i2{ -6 };
	signed i3{ -5 };

  cout << "integer: " << i1 << endl;
  cout << "signed integer: " << i2 << endl;
  cout << "signed : " << i3 << endl;

	short s1{ 13 };
	short int s2{ 14 };
	signed short s3{ 15 };
	signed short int s4{ 16 };

  cout << "short : " << s1 << endl;
  cout << "short int : " << s2 << endl;
  cout << "signed short : " << s3 << endl;
  cout << "signed short int : " << s4 << endl;

	long l{ -7L };
	long long ll{ 14LL };

  cout << "long : " << l << endl;
  cout << "long long : " << ll << endl;

	unsigned int ui{ 2U };
	unsigned uj{ 5U };
	unsigned short us{ 23U };
	unsigned long ul{ 5400UL };
	unsigned long long ull{ 140ULL };

  cout << "unsigned int : " << ui << endl;
  cout << "unsigned : " << uj << endl;
  cout << "unsigned short : " << us << endl;
  cout << "unsigned long : " << ul << endl;
  cout << "unsigned long long : " << ull << endl;

	float f{ 7.2f };

  cout << "float : " << f << endl;

	double d{ 7.2 };
	long double ld{ 16.98L };

  cout << "double : " << d << endl;
  cout << "long double : " << ld << endl;

	char ch{ 'm' };
	char8_t c8{ u8'm' };
	char16_t c16{ u'm' };
	char32_t c32{ U'm' };
	wchar_t w{ L'm' };

  cout << "char : " << ch << endl;

	bool b1{ true };

  cout << "bool : " << b1 << endl;

	std::byte b2{ 42 };
}
