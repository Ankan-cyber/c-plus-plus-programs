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
        void check(){
            if(a>b){
                cout<<a<<" is greater than "<<b<<endl;
            }
            else{
                cout<<b<<" is greater than "<<a<<endl;
            }
        }
};

int main(){
    Numbers obj;
    obj.accept();
    obj.check();
    return 0;
}