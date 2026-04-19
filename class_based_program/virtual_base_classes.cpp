//WAP to demonstrate Virtual Base Classes in C++
#include <iostream>
using namespace std;

class Person {
public:
    void walk() { cout << "Walking..." << endl; }
};

// 'virtual' ensures only one copy of Person is passed to descendants
class Faculty : virtual public Person {
public:
    void teach() { cout << "Teaching..." << endl; }
};

class Student : virtual public Person {
public:
    void study() { cout << "Studying..." << endl; }
};

// Inherits from both Faculty and Student
class TeachingAssistant : public Faculty, public Student {
public:
    void assist() { cout << "Assisting..." << endl; }
};

int main() {
    TeachingAssistant ta;

    // Without 'virtual', this next line would cause a compiler error:
    // "request for member 'walk' is ambiguous"
    ta.walk();   // Success! Only one copy of Person exists.
    
    ta.teach();
    ta.study();
    ta.assist();

    return 0;
}
