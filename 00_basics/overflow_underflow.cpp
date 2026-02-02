import <print>;

using namespace std;

int main(){

    // Overflow 
    unsigned char data {250};

    ++data;
    println("data 250 + 1 : {}", static_cast<int>(data));

    ++data;
    println("data 251 + 1 : {}", static_cast<int>(data));

    ++data;
    println("data 252 + 1 : {}", static_cast<int>(data));

    ++data;
    println("data 253 + 1 : {}", static_cast<int>(data));

    ++data; 
    println("data 254 + 1 (hex) : {:x}", static_cast<int>(data));

    ++data;  // Overflow
    println("data 255 + 1 (overflow) : {}", static_cast<int>(data));

    // Underflow 
    data = 1;

    --data;
    println("data 1 - 1 : {}", static_cast<int>(data));

    --data;
    println("data 0 - 1 : {}", static_cast<int>(data));
   
    return 0;
}
