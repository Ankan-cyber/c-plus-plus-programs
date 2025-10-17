#include <iostream>
using namespace std;

template <class T, class U>

class Pair
{

private:
    T first; U second;

public:
    Pair(T a, U b) :

                     first(a), second(b)
    {
    }
    void display(){
        cout<<first<<endl<<second;
    }

};

int main()
{   
    Pair obj(18,37);
    obj.display();
    return 0;
}