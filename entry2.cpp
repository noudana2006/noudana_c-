#include <iostream>
#include <map>
using namespace std;
int main() {
    // Declare a map with string keys and int values
    map<int, string> Students;
    Students[2007535] = "parthiban"; Students[2007536] = "parthi";
    Students[2007537] = "Rajesh";
    std::cout << "map befor removal:" << endl;
    for (const auto& pair :Students) {
        std::cout << pair.first << ": " << pair.second << endl;
    } cout << endl;
    // Remove an entry with key "tow"
    int keyToRemove = {2007536};
    auto it = Students.find(keyToRemove);
    if (it != Students.end()) {
        Students.erase(it);
        cout << "Entry with key '" << keyToRemove << "'removed." << endl;
    }else {
        cout << "key '" << keyToRemove << "' not found in the map." << endl;
    }
    // Display the map after removing the entry
    cout << "Map after removel:" << endl;
    for (const auto& pair : Students) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;
    return 0;

}
