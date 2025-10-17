#include <iostream>
using namespace std;

int main(){
    int a = 17;
    int b = 62;
    cout<<"Before swap value of a:"<<a<<" and b:"<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swap value of a:"<<a<<" and b:"<<b<<endl;
    return 0;
    
}