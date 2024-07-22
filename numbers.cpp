#include <iostream>
#include <set>
using namespace std;
int main(){
    // Declare a set of integers
    set<int> numbers;
    // Insert elements in the set
    numbers = {1, 2, 3, 4, 5, 6, 7};
    // Display the elements in the set
    cout << "Numbers in the set: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl << endl;
    return 0;
}