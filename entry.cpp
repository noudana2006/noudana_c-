#include <iostream>
#include <map>
using namespace std;
int main() {
    // Declare an empty map with string keys and string values
    map<int, string> Students;
    // Add an entry to the map
    Students[2007535] = "Parthiban";
    Students[2007536] = "Parthi";
    Students[2007537] = "Rajesh";
    // Display the contents of the map
    cout << "Student Details:" << endl << endl;
    for (const auto& entry : Students) {
        cout << "reg Number: " << entry.first << ", Name: "
        << entry.second << endl << endl;
    }
    return 0;
}