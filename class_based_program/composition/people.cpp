#include <iostream>
#include <string>
#include "Birthday.h"
using namespace std;

class Person
{
private:
    string name;
    Birthday bd;

public:
    Person(string n, Birthday b)
        : name(n), bd(b) {}

    void printInfo()
    {
        cout << name << endl;
        bd.printDate();
    }
};

int main()
{
    Birthday bd(25,05,1956);
    Person p("ankan",bd);
    p.printInfo();
    return 0;
}