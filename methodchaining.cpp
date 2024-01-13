#include <iostream>
#include <string>
using namespace std;

class MyClass {
    private:
    int data;
public:
    MyClass& setData(int newData) {
        data = newData;
        return *this;  // Return the modified object
    }

    MyClass& addValue(int valueToAdd) {
        data += valueToAdd;
        return *this;  // Return the modified object
    }

    MyClass& multiplyBy(int multiplier) {
        data *= multiplier;
        return *this;  // Return the modified object
    }

    void display() {
        cout << "Data: " << data << endl;
    }


};

int main() {
    MyClass myObject;

    // Method chaining using the 'this' pointer
    myObject.setData(20).addValue(5).multiplyBy(2).addValue(10).display();
    myObject.setData(10).addValue(5).multiplyBy(2).display();
    
    return 0;
}
