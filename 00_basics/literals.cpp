import <iostream>;
import <print>;
import <string>;

using namespace std;

int main(){
   
    // Literal types : u and l combinations for unsigned and long.
    unsigned char unsigned_char {53u};// 555U would fail because of narrowing
    
    // 2 Bytes
    short short_var{ -32768 } ; //  No special literal type for short)
    short int short_int{ 455 } ; //  No special literal type for short
    signed short signed_short{ 122 }; // No special literal type for short
    signed short int signed_short_int{ -456 }; // No special literal type for short
    unsigned short int unsigned_short_int{ 5678U };
    
    // 4 Bytes
    const int int_var{ 55 };
    signed signed_var{ 66 };
    signed int signed_int{ 77 };
    unsigned int unsigned_int{ 555U };
    
    // 4 or 8 Bytes
    long long_var{ 88L }; // 4 or 8 Bytes
    long int long_int{ 33L };
    signed long signed_long{ 44l };
    signed long int signed_long_int{ 44l };
    unsigned long int unsigned_long_int{ 555ul };

    long long long_long{ 888ll }; // 8 Bytes
    long long int long_long_int{ 999ll };
    signed long long signed_long_long{ 444ll };
    signed long long int signed_long_long_int{ 1234ll };
    
    // Grouping Numbers : C++14 and onwards
    unsigned int prize{ 1'500'00'0u };
    println("The prize is : {}", prize);

    println("signed_long_long_int : {}", signed_long_long_int);

    // Narrowing errors
    // Possible narrowing errors are cought by the braced initializer method.
    // Assignment and functional don't catch that.
    // unsigned char distance{ 555u }; //Error [0~255]
    // unsigned int game_score{ -20 }; //Error

    // println("game_score : {}", game_score);

    // With number systems - Hex : prefix with 0x
    unsigned int hex_number{ 0x22BU }; // Dec 555
    int hex_number2{ 0x400 };// Dec 1024
    println("The hex number is : {}", hex_number);
    println("The hex number 2 is : {}", hex_number2);
    
    // Representing colors with hex
    int black_color{ 0xffffff };
    println("Black color is : {}", black_color);

    // Octal literals : prefix with 0
    int octal_number{ 0777u }; // 511 Dec
    println("The octal number is : {}", octal_number);
    //!!BE CAREFUL NOT TO PREFIX YOUR INTEGERS WITH 0 IF YOU MEAN DEC
    int error_octal{ 055 };// This is not 55 in memory , it is 45 dec
    println("The erronous octal number is : {}", error_octal);
    
    // Binary literals
    unsigned int binary_literal{ 0b11111111u }; // 255 dec
    println("The binary literal is : {}", binary_literal);

    // Other literals. This is just an example and we will learn
    // more about strings as we progress in the course.
    char char_literal{ 'c' };
    int number_literal{ 15 };
    float fractional_literal{ 1.5f };
    string string_literal{ "Hit the road" };
    
    println("The char literal is : {}", char_literal);
    println("The number literal is : {}", number_literal);
    println("The fractional literal is : {}", fractional_literal);
    println("The string literal is : {}", string_literal);
   
    return 0;
}
