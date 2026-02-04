import <print>;

using namespace std;

// Tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };


int main(){

    int tool {Eraser};

    if (tool == Pen) {
        println("Active tool is Pen");
        //Do the actual painting
    }
    else if (tool == Marker) {
        println("Active tool is Marker");
    }
    else if (tool == Eraser) {
        println("Active tool is Eraser");
    }
    else if (tool == Rectangle) {
        println("Active tool is Rectangle");
    }
    else if (tool == Circle) {
        println("Active tool is Circle");
    }
    else if (tool == Ellipse) {
        println("Active tool is Ellipse");
    }

    println("Moving on...");
    
    return 0;
}
