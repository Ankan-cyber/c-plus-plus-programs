#include <iostream>
#include <fstream> // Required for file handling

using namespace std;

int main() {
    ifstream inputFile("./test.txt");

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line;
    cout << "Reading from file:" << endl;
    cout << "------------------" << endl;

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}
