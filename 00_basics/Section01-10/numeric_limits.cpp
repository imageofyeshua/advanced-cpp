import <print>;
import <limits>;

using namespace std;

int main(){

    println("The range for short is from {} to {}", numeric_limits<short>::min(), numeric_limits<short>::max());
    println("The range for unsigned short is from {} to {}", numeric_limits<unsigned short>::min(), numeric_limits<unsigned short>::max());
    println("The range for int is from {} to {}", numeric_limits<int>::min(), numeric_limits<int>::max());
    println("The range for unsigned int is from {} to {}", numeric_limits<unsigned int>::min(), numeric_limits<unsigned int>::max());
    println("The range for long is from {} to {}", numeric_limits<long>::min(), numeric_limits<long>::max());
    println("The range for float is from {} to {}", numeric_limits<float>::min(), numeric_limits<float>::max());
        
    println("---------------------------------------------");

    println("The range(with lowest) for float is from {} to {}", numeric_limits<float>::lowest(), numeric_limits<float>::max());
    println("The range(with lowest) for double is from {} to {}", numeric_limits<double>::lowest(), numeric_limits<double>::max());
    println("The range(with lowest) for long double is from {} to {}", numeric_limits<long double>::lowest(), numeric_limits<long double>::max());

    //Other facilities
    //More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    println("int is signed : {}", numeric_limits<int>::is_signed);
    println("int digits : {}", numeric_limits<int>::digits);
    return 0;
}
