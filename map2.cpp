#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string, string> fileName;
    // insert key-value pairs into the map
    fileName[".py"] = "python";
    fileName[".cpp"] = "C++";
    fileName[".c"] = "C#";
    // Use auto for type inference
    for (const auto& pair : fileName){
        // 'pair.first' is the key, 'pair.second' is the value
        cout << "file type: " << pair.first << endl;
        cout << "language: " << pair.second << endl << endl;
    }
    return 0;
}