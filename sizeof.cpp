// Write a program in C++ to find Size of fundamental data types
#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout<< "Char: "<<sizeof(char)<<" byte"<<endl;
    cout<< "Short: "<<sizeof(short)<<" byte"<<endl;
    cout<< "Int: "<<sizeof(int)<<" byte"<<endl;
    cout<< "Long: "<<sizeof(long)<<" byte"<<endl;
    cout<< "Long Long: "<<sizeof(long long)<<" byte"<<endl;
    cout<< "Float: "<<sizeof(float)<<" byte"<<endl;
    cout<< "Double: "<<sizeof(double)<<" byte"<<endl;
    cout<< "Long Double: "<<sizeof(long double)<<" byte"<<endl;
    cout<< "Boolean: "<<sizeof(bool)<<" byte"<<endl;
    return 0;
}