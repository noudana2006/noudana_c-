#include <iostream>
using namespace std;
int main() {
    cout << "Counting 10 numbers" << endl << endl;
    // Inialize the count 
    int count = 1;
    // Verifiy the condition
    while (count <= 10) {
        cout << "Counting:" << count << endl;
        count = count + 1;
    }
    cout << endl;
}