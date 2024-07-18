#include <iostream>
using namespace std;
int main(){
    double age = 4.14;
    // C++ Static_cast for explicit conversion
    int intValue = static_cast<int>(age);
    cout << "ageValue: " << age << endl;
    cout << "Int Value (explicitly Converted): " << intValue << endl;
    return 0;
}