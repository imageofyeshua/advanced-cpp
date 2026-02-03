import <print>;

using namespace std;

int main(){

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    println("Size of Float : {}", sizeof(float));
    println("Size of Double : {}", sizeof(double));
    println("Size of Long Double : {}", sizeof(long double));

    //Precision : fixed point with 20 decimal places
    println("Number1 : {:.20f}", number1);
    println("Number2 : {:.20f}", number2);
    println("Number3 : {:.20f}", number3);

    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion
    println("Number4 : {:.2f}", number4);

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    println("--------------------------------------");
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)

    // Scientific notation with 5 decimal places
    println("Number 5 : {:.5e}", number5);
    println("Number 6 : {:.5e}", number6);
    println("Number 7 : {:.5e}", number7);
    println("Number 8 : {:.5e}", number8);
    println("Number 9 : {:.5e}", number9);

    println("--------------------------------------");
    
    //Infinity and Nan
    println("Intifnity and NaN");
    
    double number10 {-5.6};
    double number11 {};//Initialized to 0
    double number12 {};  //Initialized to 0

    //Infinity
    double result {number10 / number11};
    
    println("{} / {} = {} ", number10, number11, result);
    println("{} + {} = {}", result, number10, result + number10);
    
    //NaN
    result = number11 / number12;
    
    println("{} / {} = {}", number11, number12, result);
   
    return 0;
}
