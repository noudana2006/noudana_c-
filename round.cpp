#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number = 4.56;
    // Round to the nearest integer
    double roundedNumber = round(number);
    cout << "Original number: "
    << number << endl;
    cout << "Rounded number: "
    << roundedNumber << endl;
    return 0;
}