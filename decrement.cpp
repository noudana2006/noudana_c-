#include <iostream>
using namespace std;
int main(){
    cout <<"Decreament Operations" << endl;
    // Initialize the value
    int i = 10;
    cout <<"The value of i:" << i << endl;
    // Increament method 1
    i = i - 1;
    cout <<"The decreament value of i(mathod-1):"
    << i << endl;
    // Increament method 2
    i -= 1;
    cout <<"The decreament value of i(method-2):"
    << i << endl;
    return 0;
}