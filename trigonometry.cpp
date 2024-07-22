#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // in degrees
    double angle = 90.0;
    // convert to radians
    double radianAngle = angle * M_PI / 180.0;
    double sinResult = sin(radianAngle);
    double cosResult = cos(radianAngle);
    double tanResult = tan(radianAngle);
    cout << "sin(" << angle << " degrees) = "
    << sinResult << endl;
    cout << "cos(" << angle << " degrees) = "
    << cosResult << endl;
    cout << "tan(" << angle << " degrees) = "
    << tanResult << endl;
    return 0;
}