import <print>;
import <string>;
import <typeinfo>;
import <utility>;
using namespace std;

const string prayer{ "Our Father in heaven..." };
const string& message() { return prayer; }

int main()
{
  auto x{ 123 };
  println("x type: {}", typeid(x).name());

  auto m1{ message() };
  println("m1: {}", m1);
  println("m1 type: {}", typeid(m1).name());

  const auto& m2{ message() };
  println("m2: {}", m2);
  println("m2 type: {}", typeid(m2).name());

  string str{ "C++" };
  auto result{ as_const(str) };
  println("result: {}", result);
  println("result type: {}", typeid(result).name());

  int i{ 456 };
  auto* p{ &i };
  println("p: {}", *p);
  println("p type: {}", typeid(p).name());
  println("*p type: {}", typeid(*p).name());

  const auto p1{ &i };
  println("p1 type: {}", typeid(p1).name());

  auto const p2{ &i };
  println("p2 type: {}", typeid(p2).name());

  const auto* p3{ &i };
  println("p3 type: {}", typeid(p3).name());

  auto* const p4{ &i };
  println("p4 type: {}", typeid(p4).name());

  const auto* const p5{ &i };
  println("p5 type: {}", typeid(p5).name());
}
