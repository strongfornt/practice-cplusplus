#include <iostream>
#include <string>
using namespace std;

struct car {
    string name;
    int age;
} ;

int main() {
    car myStruct;
    myStruct.name = "Alice";
    myStruct.age = 30;

    cout << "Name: " << myStruct.name << endl;
    cout << "Age: " << myStruct.age << endl;

    return 0;
}