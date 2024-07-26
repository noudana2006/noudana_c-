#include <iostream>
#include "Mathlibrary.h"
int main() {
    int num1 = 5;
    int num2 = 3;
    // Using the function from the MathLibrary
    int sum = Mathlibrary::add (num1, num2);
    int product = Mathlibrary::multiply(num1, num2);
    // Displaying the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    return 0;
}