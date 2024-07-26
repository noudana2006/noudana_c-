#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Create a file and write initial data
    ofstream outputFile("appent.txt");
    if (!outputFile) {
        cerr << "Error creating the file!" << endl;
        return 1;
    }
    outputFile << "Initial data\n";
    outputFile.close();
    // Append more data to the file
    ofstream appendFile("append.txt", ios::app);
    if (!appendFile) {
        cerr << "Error opening the file for appending!" << endl;
        return 1;
    }
    appendFile << "Appended data\n";
    appendFile.close();
    cout << "Data appended successfully!" << endl << endl;
    return 0;
}