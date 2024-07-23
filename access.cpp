#include <iostream>
#include <map>
using namespace std;
int main(){
    // Declare an empty map with string keys and string values
    map<int, string> Students;
    // Add an empty to the map
    Students[2007535] = "parthiban";
    Students[2007536] = "parthi";
    Students[2007537] = "Rajesh";
    // Display the contents of the map
    cout << "Student details:" << endl << endl;
    for (const auto& entry : Students) {
        cout << "Reg Number: " << entry.first << ",Name: "
        <<entry.second << endl << endl;

    }
    string name = Students[2007535];
    cout << "Student name: " << name << endl << endl;
    return 0;
}
