import <print>;
using namespace std;

class Demo
{
public:
  int get() { return 7; }
};

int get() { return 10; }

namespace NS
{
  int get() { return 20; }
}

int main()
{
  Demo d;
  println("Demo >> {}", d.get());
  println("NS::get() >> {}", NS::get());
  println("::get() >> {}", ::get());
  println("get() >> {}", get());
}
