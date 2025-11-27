#include <iostream>
using namespace std;

class myClass {
    public:
        void myMethod();
};

void myClass::myMethod(){
    cout << "Hello from myMethod!" << endl;
}

int main () {
    myClass obj;
    obj.myMethod();
    return 0;
}