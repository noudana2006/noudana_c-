#include <iostream>
using namespace std;
// Function Declaration
double calculate_rectangle_area();
int main() {
    double area;
    // Call the function
    calculate_rectangle_area();
    return 0;
}
// Function Definition
double calculate_rectangle_area(){
    double length, width, rectangleArea;
    // Area of rectangle
    length = 25;
    width = 10;
    rectangleArea = length * width;
    cout << "Area of rectancle is: " << rectangleArea
    << "Sqr.feets" << endl << endl;
    return rectangleArea;

}