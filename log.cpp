#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x = 100.0;
    double naturalLogResult = log(x);
    double log10Result = log10(x);
    cout << "Natural log of " << x << " is: "
    << naturalLogResult << endl;
    cout << "Base-10 log of " << x << " is: "
    << log10Result << endl;
    return 0;
}