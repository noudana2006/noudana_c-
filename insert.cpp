#include <iostream>
#include <set>
using namespace std;
int main() {
    // Create a set of strings
    set<string> mySet = {"Python", "Java", "C#", "Dart"};
    // Display the elements in the set
    cout << "Set elements:";
    for (const auto& element : mySet) {
        cout << " " << element;
    }cout << endl <<endl;
    // Add a new string element to the set
    string newElement = "C++";
    mySet.insert(newElement);
    // Display the updated set
    cout << "updated set elements:";
    for (const auto& element : mySet) {
        cout << " " << element;
    }
    cout << endl << endl;
    return 0;
}