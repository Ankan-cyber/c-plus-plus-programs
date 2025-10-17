#include <iostream>
using namespace std;

template <class T, class U>
    U sum(T a, U b){
        return a+b;
}

int main(){
    
    int x=36, y =34;
    float p=17.463, q = 93.3474;
    cout<<sum(x,q)<<endl;
    cout<<sum(y,p)<<endl;
    return 0;
}