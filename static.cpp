#include <iostream>

class Demo {
private:
    static int X;  // Private static member variable for X
    static int Y;  // Private static member variable for Y

public:
    static void get(int& x, int& y) {
        x = X;
        y = Y;
    }

    static void fun() {
        std::cout << "X: " << X << std::endl;
        std::cout << "Y: " << Y << std::endl;
    }
};

int Demo::X = 10;  // Initialize default value for X
int Demo::Y = 20;  // Initialize default value for Y

int main() {
    // Creating an object of the Demo class (not necessary due to static methods)
    int inputX, inputY;

    // Reading input values for X and Y
    std::cin >> inputX >> inputY;

    // Updating X and Y with the given input values
    Demo d;
    d.get(inputX,inputY);

    // Calling the fun() method to print the values of X and Y
    d.fun();

    return 0;
}
