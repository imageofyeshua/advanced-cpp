import <iostream>;
import <print>;
import <typeinfo>;

using namespace std;

int main(){

  auto var1 {12};
  auto var2 {13.0};
  auto var3 {14.0f};
  auto var4 {15.0l};
  auto var5 {'e'};
  auto var6 { 123u}; // unsigned
  auto var7 { 123ul}; //unsigned long
  auto var8 { 123ll}; // long long

  println("Var1 Type : {}", typeid(var1).name());
  println("Var2 Type : {}", typeid(var2).name());
  println("Var3 Type : {}", typeid(var3).name());
  println("Var4 Type : {}", typeid(var4).name());
  println("Var5 Type : {}", typeid(var5).name());
  println("Var6 Type : {}", typeid(var6).name());
  println("Var7 Type : {}", typeid(var7).name());
  println("Var8 Type : {}", typeid(var8).name());

  println("------------------------------------------");

  println("Size of Var1 : {}", sizeof(var1));
  println("Size of Var2 : {}", sizeof(var2));
  println("Size of Var3 : {}", sizeof(var3));
  println("Size of Var4 : {}", sizeof(var4));
  println("Size of Var5 : {}", sizeof(var5));
  println("Size of Var6 : {}", sizeof(var6));
  println("Size of Var7 : {}", sizeof(var7));
  println("Size of Var8 : {}", sizeof(var8));

  return 0;
}
