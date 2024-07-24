#include <iostream>
using namespace std;
int main() {
    // Example: Print number from 1 to 5 using a for
    // loop with a break statement
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
        // Break the loop when i is equal to 3
        if (i == 3) {
            cout << "(Breaking the loop)";
            break;
        }
    }
    cout << endl << endl;
    cout << "Loop finished." << endl << endl;
    return 0;
}