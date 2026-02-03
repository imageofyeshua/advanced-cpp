import <print>;

using namespace std;

int main(){

    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF};
    
    unsigned int my_color {0xAABCDE00};
	
    println("Red is : {:X}", ((my_color & red_mask) >> 24));
    println("Green is : {:X}", ((my_color & green_mask) >> 16));
    println("Blue is : {:X}", ((my_color & blue_mask) >> 8));
    println("Alpha is : {:X}", ((my_color & alpha_mask) >> 0));
    
    return 0;
}
