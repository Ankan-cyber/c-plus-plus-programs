#include <iostream>
using namespace std;

// Abstract Base Class
class SmartDevice {
public:
    // Pure Virtual Function 1
    virtual void turnOn() = 0;

    // Pure Virtual Function 2
    virtual void turnOff() = 0;

    // Pure Virtual Function 3
    virtual void displayStatus() = 0;

    virtual ~SmartDevice() {} 
};

// Derived class MUST implement all 3 functions
class SmartLight : public SmartDevice {
public:
    void turnOn() override { cout << "Light: Powering on..." << endl; }
    
    void turnOff() override { cout << "Light: Powering off..." << endl; }
    
    void displayStatus() override { cout << "Light: Brightness is 80%" << endl; }
};

int main() {
    // SmartDevice device; // Error: Cannot create object
    
    SmartDevice* bulb = new SmartLight();
    
    bulb->turnOn();
    bulb->displayStatus();
    bulb->turnOff();

    delete bulb;
    return 0;
}
