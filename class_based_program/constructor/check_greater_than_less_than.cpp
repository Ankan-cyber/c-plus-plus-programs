#include <iostream>
using namespace std;
class check_greater_than_less_than
{
public:
    check_greater_than_less_than(int a, int b)
    {
        if (a > b)
        {
            cout << a << " is greater than " << b << endl;
        }
        else
        {
            cout << b << " is greater than " << a << endl;
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    check_greater_than_less_than obj(a, b);
    return 0;
}