#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "noudana";
    int age = 17;
    string message = "Hi," + name +
    "! you are " + std::to_string(age)+
    "years old.today your Birthday, Happy Birthday\n";
    cout << message;
    return 0;
}