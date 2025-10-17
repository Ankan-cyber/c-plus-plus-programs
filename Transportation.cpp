/*
You are making a program for a bus service. 
A bus can transport 50 passengers at once. 
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.
*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of passangers: ";
    cin>>x;
    int pass = x%50;
    cout<<pass<<" empty seats the last bus will have"<<endl;
    return 0;
}