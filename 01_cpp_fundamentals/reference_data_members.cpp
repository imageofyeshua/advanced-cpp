import <print>;
using namespace std;

class MyClass
{
  public:
    MyClass(int& ref) : m_ref{ ref } { /* Body of constructor */ }
    void printRef() { println("m_ref: {}", m_ref); }
  private:
    int& m_ref;
};

int main()
{
  int i{ 153 };
  MyClass m{ i };
  m.printRef();
}
