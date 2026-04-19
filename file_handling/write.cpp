#include <iostream>
#include <fstream> // Required for file handling
using namespace std;

int main() {
    
    ofstream outFile("./test.txt");

        if (outFile.is_open()) {
    
        outFile << "This is the first line." << endl;
        outFile << "Writing to a file is easy!" << endl;
        outFile << "Age: " << 21 << endl;

        outFile.close();
        cout << "Data successfully written to file." << endl;
    } 
    else {
        cout << "Error: File could not be opened." << endl;
    }

    return 0;
}
