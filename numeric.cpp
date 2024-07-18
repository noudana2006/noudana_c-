#include <iostream>
#include <string>
int main(){
    // Numeric Variable
    int num = 42;
    // Convert numeric to string
    std::string strNum = std::to_string(num);
    // Display the result
    std::cout << "Numeric value: " << num << std::endl;
    std::cout << "String representation: " << strNum << std::endl;
    return 0; 
}