#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Base class display function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Calling base class method
    obj.show();    // Calling derived class method
    return 0;
}