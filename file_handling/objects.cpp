//WAP to demonstrate file handling with objects in C++

#include <iostream>
#include <fstream>
// #include <string>

using namespace std;

class Student {
public:
    int roll;
    char name[50]; // Use char array for easy binary writing

    void getData() {
        cout << "Enter Roll: "; cin >> roll;
        cout << "Enter Name: "; cin.ignore(); cin.getline(name, 50);
    }

    void showData() {
        cout << "Roll: " << roll << " | Name: " << name << endl;
    }
};

int main() {
    Student s1, s2;

    // 1. WRITING OBJECT TO FILE
    s1.getData();
    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1)); 
    outFile.close();

    cout << "\nData saved to file. Now reading back...\n";

    // 2. READING OBJECT FROM FILE
    ifstream inFile("student.dat", ios::binary);
    if (inFile.read((char*)&s2, sizeof(s2))) {
        s2.showData();
    }
    inFile.close();

    return 0;
}
