#include <iostream>
using namespace std;
int main() {
    string State;
    State = "Tamilnadu";
    if (State == "Tamilnadu") {
        cout << "Recommend tamil movies" << endl << endl;

    } else if (State == "Karnataka") {
        cout << "Recommend kanada movies" << endl << endl;

    }else if (State == "Andhrapradhesh") {
        cout << "Recommend telugu movies" << endl << endl;

    }else if (State == "Pondicherry") {
        cout << "Recommend tamil movies" << endl << endl;

    }else {
        cout << "Recommend english movies" << endl << endl;

    }
return 0;
}