// WAP to demonstrate Dynamic Binding using Base Class Pointers

#include <iostream>
using namespace std;

class Media {
public:
    // 'virtual' tells the compiler to use Dynamic Binding
    virtual void play() {
        cout << "Playing generic media..." << endl;
    }

    // Virtual destructor is good practice for dynamic binding
    virtual ~Media() {}
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing Video: High Definition MP4" << endl;
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing Audio: 320kbps MP3" << endl;
    }
};

int main() {
    // 1. Create a Base Class Pointer
    Media* mPtr;

    // 2. Point to a Video object
    mPtr = new Video();
    mPtr->play(); // Dynamic Binding: Calls Video's play()

    // 3. Point to an Audio object
    mPtr = new Audio();
    mPtr->play(); // Dynamic Binding: Calls Audio's play()

    delete mPtr;
    return 0;
}