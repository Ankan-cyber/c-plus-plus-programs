#include <iostream>
using namespace std;
class Numbers{
    private:
        int a,b;
    public:
        void accept(){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        void sum(){
            cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
};

int main(){
    Numbers obj;
    obj.accept();
    obj.sum();
    return 0;
}