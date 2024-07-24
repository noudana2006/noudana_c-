#include <iostream>
#include <map>
using namespace std;
int main() {
    // Declare a map with string keys and string values
    map<string, string> Student;
    // Insert key-value pair into the map
    Student["1.Name"] = "parthiban";
    Student["2.age"] = "32";
    Student["3.city"] = "cuddalore";
    // Iterate over the map to print key and values
    cout << "student details:" << endl << endl;
    for (const auto& pair : Student) {
        cout << "key:" << pair.first << ", value: " << pair.second << endl;
    }
    
    cout << endl;
    // Access specific value using a key
    string keyToFind = "2.Age";
    auto it = Student.find(keyToFind);
    if (it != Student.end()) {
        cout << "Value for key '" << keyToFind << "': " << it->second << endl << endl;

    }else {
        cout << "key '" << keyToFind << "' not found in the map." << endl << endl;

    }
    return 0;
}