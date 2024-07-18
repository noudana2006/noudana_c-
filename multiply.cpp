#include <iostream>
using namespace std;
int main()  {
    int price, quantity;
    price = 99; quantity = 12;
    // Multiply program
    int totalprice = price * quantity;
    cout <<"I bought " << quantity <<
    " Apples. its total price is " << totalprice <<endl;
    // Multiply inside interpolation method
    cout <<"I bought" << quantity <<
    " Apples. its total price is " << (price * quantity) <<endl;
    return 0;
}