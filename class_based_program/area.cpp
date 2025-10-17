/*
Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/

#include <iostream>
using namespace std;

class Shape{
    protected:
        float width,height;
    public:
        void set(float a, float b){
            width=a;
            height=b;
        }

};

class Rectangle : public Shape{
    public:
        float area(){
            return (width*height);
        }
};

class Triangle : public Shape{
    public:
        float area(){
            return (width*height/2);
        }
};

int main(){
    Triangle obj1;
    Rectangle obj2;
    obj1.set(3.2,5.38);
    obj2.set(3.2,5.38);
    cout<<obj1.area()<<endl;
    cout<<obj2.area()<<endl;
    return 0;
}