#include <iostream>
using namespace std;

class Encapsulation
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

int main () {
    Encapsulation obj;
    obj.setName("John Doe");
    cout << "Name: " << obj.getName() << endl;
}