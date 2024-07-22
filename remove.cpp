#include <iostream>
#include <set>
using namespace std;
int main() {
    // Create a set of strings
    set<string> books = {"python", "Java", "C++", "Dart"};
    // Display the original set
    cout << "Original Set: ";
    for (const auto &element : books) {
        cout << element << " ";
    }
    cout << endl <<endl;
    // Remove a specific string element from the set
    string elementToRemove = "Java";
    books.erase(elementToRemove);
    // Display the set after removal
    cout << "Set after removing \"" << elementToRemove << "\": ";
    for (const auto &element : books) {
        cout << element << " ";
    }
    cout << endl << endl;
    return 0;
}