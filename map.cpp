#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    // Explicit type annotation for std::map with
    // std::string key and value types
    map<string, int> score;
    // Adding key-value pairs
    score["tamil"] = 80;
    score["english"] = 70;
    score["maths"] = 100;
    // Accessing and printing values
    cout << "Score in Tamil : " << score["tamil"] << endl;
    cout << "Score in english : " << score["english"] << endl;
    cout << "Score in maths: " << score["maths"] << endl << endl;
    return 0;
}