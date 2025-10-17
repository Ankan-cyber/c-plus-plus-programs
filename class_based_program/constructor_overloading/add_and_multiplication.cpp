#include <iostream>
using namespace std;

class add
{
public:
    add(int a, int b)
    {
        cout << a + b << endl;
    }
    add(double x, double y)
    {
        cout << x * y << endl;
    }
};

int main()
{
    add obj1(10,24);
    add obj2(13.4,47.3);
    return 0;
}