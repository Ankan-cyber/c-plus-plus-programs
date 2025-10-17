#include <iostream>
using namespace std;

class check
{
public:
    check()
    {
        cout << "Constructor callout 🤨"<<endl;
    }
    ~check()
    {
        cout << "Destructor will callout at end 💪"<<endl;
    }
};

int main()
{
    check obj;
    return 0;
}