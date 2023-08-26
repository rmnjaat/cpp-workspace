#include <iostream>
using namespace std;

class Demo {
private:
   
    static int X;  // Private static member variable for X
    static int Y; 
    static int z;
     // Private static member variable for Y

public:
    Demo(){
        z++;
    }
    static void get(int& x, int& y) {
        x = X;
        y = Y;
    }

    static void fun() {
        std::cout << "X: " << X << std::endl;
    
        std::cout << "Y: " << Y << std::endl;

        std::cout<<"z"<<z<<endl;
    }
};
int Demo::z=0;
int Demo::X = 10;  // Initialize default value for X
int Demo::Y = 20;  // Initialize default value for Y

int main() {
    // Creating an object of the Demo class (not necessary due to static methods)
    int inputX, inputY;

    // Reading input values for X and Y
    std::cin >> inputX >> inputY;

    // Updating X and Y with the given input values
    Demo d;
    Demo::get(inputX,inputY);

    // Calling the fun() method to print the values of X and Y
    Demo::fun();

    Demo d2;
    Demo::fun();

    

    return 0;
}
