/*
Write a program with a mother class animal. Inside it define a name and an age variables, and set_value() function.Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).
*/
#include <iostream>
using namespace std;

class Animal
{
protected:
    int age;
    string name;

public:
    void set_value(int a, string b)
    {
        age = a;
        name=b;
    }
};

class Zebra : public Animal
{
public:
    void message()
    {
        cout << "The zebra named " << name << " is " << age << " years old. The zebra comes form africa\n";
    }
    Zebra(int a, string b){
        set_value(a,b);
    }
};
class Dolphin : public Animal
{
public:
    void message()
    {
        cout << "The dolphin named " << name << " is " << age << " years old. The dolphin comes form New Zeland\n";
    }
    Dolphin(int a, string b){
        set_value(a,b);
    }
};

int main()
{
    Zebra zeb(3,"Ana");
    Dolphin dol(5,"Jin");

    zeb.message();
    dol.message();
    return 0;
}