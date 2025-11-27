#include <iostream>
using namespace std;

class Base1
{
protected:
    int salary;
};

class Derived1 : public Base1
{
public:
    void setSalary(int sal)
    {
        salary = sal;
    }

    int getSalary(){
        return salary;
    }
};

int main()
{

    Derived1 obj1;
    obj1.setSalary(50000);
    cout << "Salary: " << obj1.getSalary() << endl;
    // cout << "Salary set successfully in Derived1 class." << endl;

    return 0;
}