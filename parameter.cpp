#include <iostream>
using namespace std;
// Function declaration including parameters
int rectangle(int length, int width);
int main() {
    int length = 20;
    int width = 10;
    // Calling Function with arguments
    int rectangleArea = rectangle(length, width);
    cout << "Area of rectangle: "
    << rectangleArea << "Sqr.feets" << endl << endl;
    return 0;
}
// Function definition with parameters
int rectangle(int length, int width) {
    // Multiply length and width
    return length * width;
}