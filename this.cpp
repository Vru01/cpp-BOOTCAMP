#include <iostream>
using namespace std;

class BOOTCAMP {
private:
    int ID;

public:
    void setID(int ID) {
        // Use "this" to refer to the member variable
        this->ID = ID;
    }

    int getID() {
        // Return the value of the member variable using "this"
        return this->ID;
    }

    // EIDample of passing the current object as a parameter
    void printAddress() {
        // "this" is a pointer, so we need to dereference it to get the actual object
        ::cout << "Object at address: " << this << ::endl;
    }
};

int main() {
    BOOTCAMP obj1, obj2;

    // Set values using member function and print them
    obj1.setID(42);
    obj2.setID(17);

    ::cout << "Value of obj1.ID: " << obj1.getID() << ::endl;
    ::cout << "Value of obj2.ID: " << obj2.getID() << ::endl;

    // Demonstrate passing the current object as a parameter
    obj1.printAddress();
    obj2.printAddress();

    return 0;
}
