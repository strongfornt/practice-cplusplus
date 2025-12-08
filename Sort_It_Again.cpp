#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(const Student &a, const Student &b)
{
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;  

    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks; 
    return a.id < b.id; 
}


int main()
{
    int N;
    cin >> N;
    vector<Student> students;

    for (int i = 0; i < N; i++)
    {
        Student st;
        cin >> st.nm >> st.cls >> st.s >> st.id >> st.math_marks >> st.eng_marks;
        students.push_back(st);
    }

    sort(students.begin(), students.end(), cmp);
    for (auto st : students)
    {
        cout << st.nm << " " << st.cls << " " << st.s << " "
             << st.id << " " << st.math_marks << " " << st.eng_marks << endl;
    }

    return 0;
}
