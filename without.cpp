#include <iostream>
using namespace std;
int main() {
    int count = 0;
    while (count < 5) {
        cout << "Count: " << count << endl;
        count++; // Increment count manually, skipping the use of continue
    }
    cout << endl;
    cout << "Lop ended." << endl << endl;
    return 0;
}