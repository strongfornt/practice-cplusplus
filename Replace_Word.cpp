#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;

    vector<pair<string, string>> v;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        v.push_back(make_pair(S, X));
    }

    for (auto p : v)
    {

        size_t pos = p.first.find(p.second);
        while(pos != string::npos)
        {
            p.first.replace(pos, p.second.length(), "#");
            pos = p.first.find(p.second, pos + 1);
        }
       
        cout << p.first << endl;
        }
    return 0;
}
