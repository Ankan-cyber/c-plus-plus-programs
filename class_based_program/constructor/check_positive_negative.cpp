#include <iostream>
using namespace std;

class check_positive_negative
{
public:
    check_positive_negative(int a){
        if (a>0)
        {
            cout<<"The number is positive"<<endl;
        }
        else
        {
            cout<<"The number is negative"<<endl;
        }
        
    }
  
};

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    check_positive_negative c(x);
    return 0;
}