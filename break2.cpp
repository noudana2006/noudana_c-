#include <iostream>
using namespace std;
int main() {
    int count = 0;
    while (count < 5) {
        cout << "Count: " << count << endl << endl;
        // Increment the count
        ++count;
        // you can add any condition here to control the loop without using break
        if (count >= 5) {
            // Exiting the loop when the condition is met
            cout << "Exiting the loop." << endl << endl;
        }
    }
    return 0;
}