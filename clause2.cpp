#include <iostream>
#include <list>
using namespace std;
int main() {
    int age;
    // Recommend horror movies
    age = 16;
    cout << "Age is: " << age << endl;
    if (age < 10) {
        cout << "Recommend cartoon movies" << endl;

    }else {
        cout << "Recommend horror movies" << endl;

    }
    cout << endl;
    // Recommend Cartoon movies
    age = 8;
    cout << "Age is: " << age << endl;
    if (age < 10) {
        cout << "Recommend cartoon movies" << endl;

    }
    cout << endl;
    return 0;
}