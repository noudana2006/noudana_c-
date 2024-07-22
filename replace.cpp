#include <iostream>
#include <set>
using namespace std;
int main(){
    //Create a set of strings
    set<string> books = {"python", "Dart", "C++", "C#"};
    // Print the original set
    cout << "Original set:";
    for (const auto &element : books) {
        cout << " " << element;
    }
    cout << endl << endl;
    // Replace "Dart" with "Java" in the set
    books.erase("Dart");
    books.insert("Java");
    //Print the set after replacement
    cout << "Set after replacement:";
    for (const auto &element : books){
        cout << " " << element;
    }
    cout << endl << endl;
    return 0;
}
