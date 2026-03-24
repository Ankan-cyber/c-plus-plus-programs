#include<iostream>
using namespace std;
class Increment
{
public:
    int var;
    Increment(int a) : var(a) {}
    void operator++()
    {
        var++;
    }
    void operator++(int)
    {
        var++;
    }
};

int main()
{
    Increment obj(27), obj1(34);
    ++obj;
    obj1++;
    cout << obj.var << endl;
    cout << obj1.var << endl;
    return 0;
}