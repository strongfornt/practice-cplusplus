#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n, i;

    cin >> n;

    Student arr[n];

    for (i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    for (i = 0; i < n; i++)
    {

        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks;
    }

    return 0;
}