#include <iostream>
using namespace std;
int main() {
    int count = 0;
    // This while loop will continue until count is less than 5
    while (count < 5) {
        cout << "Count:" << count << endl << endl;
        // Increment count
        count++;
        // If count reaches 3, exsit the loop using the break statement
        if (count == 3) {
            cout << "Breaking out of the loop at count 3." << endl << endl;
            break;
        }
    }
    cout << "Loop finished." << endl << endl;
    return 0;
}