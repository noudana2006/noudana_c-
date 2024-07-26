#include <iostream>
using namespace std;
// Function Definition
double calculate_rectangle_area(){
    double length, width, rectangleArea;
    // Area of rectangle
    length = 25;
    width = 10;
    rectangleArea = length * width;
    cout << "Area of rectangle is: " << rectangleArea
    << " sqr.feets" << endl << endl;
    return rectangleArea;
}
int main() {
    double area;
    // Call the function
    calculate_rectangle_area();
    return 0;
}