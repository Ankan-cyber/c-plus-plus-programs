/*
You are working on a ticketing system. A ticket costs $10. 
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.
*/
#include <iostream>
using namespace std;

int main(){
    int ages[5];
    cout<<"Enter age of five people in your group\n";
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    float small = ages[0];
    for(int i =0; i<5; i++){
        if(ages[i]<small){
            small=ages[i];
        }
    }
    float discount;
    small=small/100;
    discount = 50*small;
    discount = 50-discount;
    cout<<"The discounted price will be "<<discount<<"$\n";
    return 0;
}