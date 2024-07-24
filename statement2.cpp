#include <iostream>
using namespace std;
int main() {
    // Example: Print even numbers between 1 and 10, skipping odd number
    for (int i = 1; i <= 10; ++i) {
        // check if the number is odd
        if (i % 2 != 0) {
            //Skipe the rest of the loop and move to the next iteration
            continue;
        }
        // print the even number
        cout << i << " is even." << endl << endl;

    }
    return 0;
}