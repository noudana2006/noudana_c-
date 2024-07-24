#include <iostream>
#include <string>
using namespace std;
int main() {
    string state;
    state = "Tamilnadu";
    switch (state[0]) {
        case 'T':
             cout << "Recommend Tamil movies!" << endl;
             break;
        case 'K':
             cout << "Recommend Kannada movies!" << endl;
             break;
        default:
             cout << "Unknown state!" << endl;

    }
    return 0;
}