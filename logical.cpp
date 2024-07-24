#include <iostream>
using namespace std;
int main() {
    string idly, chutney;
    // logic AND
    idly = "Good";
    chutney = "Good";
    if ( idly == "Good" && chutney == "Good") {
        cout << "Breakfast was good (:";
    } else {
        cout << "Breakfast was bad ):";
    }
    cout << endl << endl;
    return 0;
}