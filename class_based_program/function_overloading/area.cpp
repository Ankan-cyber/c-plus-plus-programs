#include<iostream>
using namespace std;

class overload
{
public:
    float area(float r) 
    {
        return 3.14*r*r;
    }
    
    double area(double r)
    {
        return r*r;
    }
    double area(double l, double b)
    {
        return l*b;
    }
};  

int main()
{
    overload obj;
    cout << "The area of circle: " << obj.area(5.3f) << endl;
    cout << "The area of square: " << obj.area(3.5) << endl;
    cout << "The area of rectangle: " << obj.area(3.5,5.3) << endl;
    return 0;
}
