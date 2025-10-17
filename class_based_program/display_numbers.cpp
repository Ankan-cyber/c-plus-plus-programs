// we make a class and two ojects from those classes to check the encapsulation point oop
#include <iostream>
using namespace std;

class Numbers{
    private:
        int year;
    public:
        void accept(){
            cout<<"Enter a year: ";
            cin>>year;
        }
        void display(){
            cout<<"Welcome in C++ in "<<year<<endl;
        }
};

int main(){
    Numbers a,b;
    cout<<"Enter two different years two see how encapsulation works\n";
    a.accept();
    b.accept();
    a.display();
    b.display();
    cout<<"Now we see that every object is isolated from each other and they have different value to the same variable";
    return 0;
}