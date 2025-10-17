#include <iostream>
using namespace std;

// Generic Template
template <class T>
class Myclass{
    public:
        Myclass(T x){
            cout<<x<<" is not a character"<<endl;
        }
};

// Specialization Template
template <>
class Myclass <char>{
    public:
        Myclass(char x){
            cout<<x<<" is a character"<<endl;
        }
};

int main(){

    Myclass <int> obj1(27);
    Myclass <double> obj2(31.34);
    Myclass <char> obj3('k');
    return 0;
}