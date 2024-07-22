#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> set1 = {1, 2, 3, 4, 5};
    unordered_set<int> set2 = {3, 4, 5, 6, 7};
    unordered_set<int> unionSet;
    // Perform union operation
    unionSet.insert(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());
    // Output the reset
    cout << "union set: ";
    for (const auto& element : unionSet){
        cout << element << " ";
    }
    cout << endl << endl;
    return 0;
}