#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    // Open a file for reading
    ifstream inputFile("sync.txt");
    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;

    }
    // Read and output the content of the file
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    // Close the file
    inputFile.close();
    return 0;
}