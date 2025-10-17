#include <iostream>
using namespace std;

int main()
{
    try
    {
        int motherAge = 29;

        int sonAge = 36;

        if (sonAge > motherAge)
        {

            throw 99;
        }
    }
    catch(...){
        cout<< "Mothers age is less than Sons Age"<<"  -Error\n";
    }
    return 0;
}