#include <iostream>
#include <set>
using namespace std;
int main() {
    // Create a set 
    set<string> setBooks = {"python", "c++", "c#", "Dart", "Java"};
    // Display the original set
    cout << "Original set: ";
    for (const auto& element : setBooks) {
        cout << element << " ";
    }
    cout << endl << endl;
    // Clear all elements from the set
    setBooks.clear();
    // Display the set after clearing
    cout << "Set after clesring: ";
    for (const auto& element : setBooks){
        cout << element << " ";
    }
    cout << endl << endl;
    return 0;
}