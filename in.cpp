#include <iostream>
using namespace std;
int main() {
    // Example array
    int numbers[] = {1, 2, 3, 4, 5};
    // Using the "for-in" statement to iterate over array element
    for (int number : numbers) {
        cout << number << " ";

    }
    cout << endl << endl;
    return 0;
}