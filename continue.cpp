#include <iostream>
using namespace std;
int main() {
    int i = 0;
    while (i < 5) {
        i++;
        // Skip the iteration if i is odd
        if (i % 2 != 0) {
            continue;
        } 
        // This code will be skipped for odd values of i
        cout << "Current value of i: " << i << endl;

    }
    cout << endl;
    return 0;
}