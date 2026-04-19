//WAP to demonstrate Abstract Class and Pure Virtual Function
#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void draw() = 0; 

    // Abstract classes can still have regular functions
    void info() { cout << "This is a shape." << endl; }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle..." << endl;
    }
};

int main() {
    // Shape s; // ERROR: Cannot instantiate abstract class
    
    Shape* sPtr = new Circle(); // OK: Pointer to child
    sPtr->draw();
    sPtr->info();

    return 0;
}