#include <iostream>
using namespace std;

class Base1 {
public: 
    void display1() {
        cout << "Base1 class display function called." << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 class display function called." << endl;
    }
};

class Derived : public Base1, public Base2 {

};

int main() {
    Derived obj;
    obj.display1(); // Calling Base1 class method
    obj.display2(); // Calling Base2 class method

    return 0;
}