import <print>;

using namespace std;

int main(){
	short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; //1
	char var4 {50};
	
	println("size of var1 : {}", sizeof(var1));
	println("size of var2 : {}", sizeof(var2));
	println("size of var3 : {}", sizeof(var3));
	println("size of var4 : {}", sizeof(var4));
	
	auto result1 = var1 + var2 ;
	auto result2 = var3 + var4;
	
	println("size of result1 : {}", sizeof(result1));
	println("size of result2 : {}", sizeof(result2));
   
  return 0;
}
