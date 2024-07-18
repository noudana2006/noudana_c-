#include <iostream>
#include <string>
using namespace std;
int main(){
    // Using Unicode escape sequence to represent emojis
    std::string Emoji = "\U0001f604 \U0001f680 \n";
    // Unicode code points for
    // Display the emoji string
    std::cout << "Hello Variablz:" << Emoji;
    return 0;
}