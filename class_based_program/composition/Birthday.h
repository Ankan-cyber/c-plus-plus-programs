#include <iostream>
using namespace std;
class Birthday
{

public:
    Birthday(int d, int m, int y)

        : month(m), day(d), year(y)

    {
    }

    void printDate()

    {

        cout << month << "/" << day

             << "/" << year << endl;
    }

private:
    int month;

    int day;

    int year;
};