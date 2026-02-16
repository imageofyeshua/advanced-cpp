import <iostream>;
import <print>;

using namespace std;

int main(){
    
    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    
    int* pointer1 {&scores[0]};
    int* pointer2 {&scores[8]};
	
    //Can also compare pointers
    
    //The further you go in the array, the bigger the address
    
    println("Comparing pointers : ");
	
    println("pointer1 > pointer2(int) : {}",  (int)(pointer1 > pointer2));
    println("pointer1 > pointer2(bool) : {}",  (pointer1 > pointer2));
    println("pointer1 < pointer2(int) : {}",  (int)(pointer1 < pointer2));
    println("pointer1 < pointer2(bool) : {}",  (pointer1 < pointer2));
    println("pointer1 >= pointer2(int) : {}",  (int)(pointer1 >= pointer2));
    println("pointer1 >= pointer2(bool) : {}",  (pointer1 >= pointer2));
    println("pointer1 <= pointer2(int) : {}",  (int)(pointer1 <= pointer2));
    println("pointer1 <= pointer2(bool) : {}",  (pointer1 <= pointer2));
    println("pointer1 == pointer2(int) : {}",  (int)(pointer1 == pointer2));
    println("pointer1 == pointer2(bool) : {}",  (pointer1 == pointer2));
    println("pointer1 != pointer2(int) : {}",  (int)(pointer1 != pointer2));
    println("pointer1 != pointer2(bool) : {}",  (pointer1 != pointer2));
    
    return 0;
}
