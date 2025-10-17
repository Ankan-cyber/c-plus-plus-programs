#include <iostream>
using namespace std;

class Numbers
{
public:
    int var;
    Numbers() {}
    Numbers(int a) : var(a) {}

    Numbers operator+(Numbers &obj)
    {
        Numbers res;
        res.var = this->var + obj.var;
        return res;
    }
};

int main()
{
    Numbers obj1(27), obj2(34);
    Numbers res = obj1 + obj2;
    cout << res.var << endl;
    return 0;
}