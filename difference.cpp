#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    set <int> difference;
    set_difference(set1.begin(), set1.end(), set2.begin(),
    set2.end(), inserter(difference, difference.begin()));
    cout << "Difference: ";
    for (int value : difference) {
        cout << value << " ";
    }
    cout << endl << endl;
    return 0;
}