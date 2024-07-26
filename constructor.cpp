#include <iostream>
#include <string>
using namespace std;
// Define a simple class called 'person'
class person {
private:
    string name; int age;
public:
    // Constructor with parameters
    person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl << endl;
    }
    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl << endl;
    }

};
int main() {
    // Create objects of the 'person' class using the constructor
    person person1("parthi", 32);
    person person2("prathap", 30);
    // call member function to display infomation
    person1.displayInfo();
    person2.displayInfo();
    return 0;
    

}