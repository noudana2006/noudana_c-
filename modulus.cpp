#include <iostream>
using namespace std;
int main() {
    int students, sections;
    students = 1210;
    sections = 12;
    // Modulus Program
    int total = students % sections;
    cout << "Remaining " << total << " students are there." << endl;
    return 0;
}