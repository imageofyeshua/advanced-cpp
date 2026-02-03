import <print>;
import <bitset>;

using namespace std;

int main(){

    unsigned short int data {15};

    // Displaying various bases
    // {:d} = decimal (default)
    // {:o} = octal
    // {:x} = hexadecimal (lowercase)
    // {:X} = hexadecimal (uppercase)
    // {:b} = binary (uppercas

    println("data (decimal) : {}", data);
    println("data (decimal) : {:d}", data);
    println("data (octal) : {:o}", data);
    println("data (hexadecimal) : {:x}", data);
    println("data (hexadecimal) : {:X}", data);
    println("data (binary) : {:b}", data);
    println("data (binary) : {:16b}", data);
    println("data (binary) : {:#16b}", data);

    println("binary expression using bitset");
    bitset<16> binary_view(data);
    println("data (binary) : {}", binary_view.to_string());
   
    return 0;
}
