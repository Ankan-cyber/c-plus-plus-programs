#include <iostream>
using namespace std;

class dynamic_constructor
{
public:
    int *arr1;
    int size;
    dynamic_constructor(int s){
        size =s;
        arr1 = new int[size];
    }
    void input(){
        cout<<"Enter "<<size<<" elements: "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>arr1[i];
        }
    }
    void display(){
        for (int i = 0; i < size; i++)
        {
            cout<<arr1[i]<<"\t";
        }
    }
    ~dynamic_constructor(){
        delete[] arr1;
    }
};

int main(){
    dynamic_constructor obj1(5);
    obj1.input();
    obj1.display();
}