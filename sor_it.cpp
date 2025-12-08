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

int main()
{
    int N, i;
    cin >> N;

    vector<Student> students;

    for (i = 0; i < N; i++)
    {
        Student st;
        cin >> st.nm >> st.cls >> st.s >> st.id >> st.math_marks >> st.eng_marks;
        students.push_back(st);
    }

    for (auto st : students)
    {
        cout << st.nm << " " << st.cls << " " << st.s << " " << st.id << " " << st.math_marks << " " << st.eng_marks << endl;
    }

    return 0;
}
