#include<iostream>
using namespace std;

class overload
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    // double add(int a, int b)
    // {
    //     return a + b;
    // }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};  

int main()
{
    overload obj;
    cout << "The sum of 2 and 3 is: " << obj.add(2, 3) << endl;
    cout << "The sum of 2, 3 and 4 is: " << obj.add(2, 3, 4) << endl;
    cout << "The sum of 2.5 and 3.5 is: " << obj.add(2.5, 3.5) << endl;
    return 0;
}
