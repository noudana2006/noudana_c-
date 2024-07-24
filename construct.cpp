#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    // Declare a map with string as key and integer as value
    map<std::string, int> person;
    // Insert values into the map
    person["Ragul"] = 25;
    person["David"] = 30;
    person["Sam"] = 22;
    // Access and print values
    cout << "Age of Ragul: " << person["Ragul"] << endl;
    cout << "Age of David: " << person["David"] << endl;
    cout << "Age of Sam: " << person["Sam"] << endl << endl;
    return 0;
}