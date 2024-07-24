#include <iostream>
using namespace std;
int main() {
    int x = 7;
    int y = 7;
    // Using equality comparison operator mathod-1
    if (x = y) {
        cout << "x is equal to y" << endl;
    } else {
        cout << "x is not equal to y" << endl << endl;
    }
    int a = 6;
    int b = 7;
    // Using equality comparison operator mathod-2
    if (a != b) {
        cout << "a not equal to b" << endl << endl;
    }else {
        cout << "a equal to b" << endl << endl;
    }
    return 0;
}