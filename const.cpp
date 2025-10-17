#include <iostream>
using namespace std;

class Myclass{
    public:
        int x;
        Myclass(){}
        Myclass(int a)
        : x(a){}
        void print(){
            cout<<x;
        }
};
int main(){
    const int x = 35;
    // x = 25;  // This expression not gonna work cause 'x' is a read-only variable
    cout<<"x = "<<x<<endl;

    Myclass obj1(37);
    const Myclass obj2(31);

    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;

    obj1.x = 18;
    cout<<obj1.x;

    // obj2.x = 28; // This expression not gonna work cause 'obj2' is a read-only object

    return 0;
}