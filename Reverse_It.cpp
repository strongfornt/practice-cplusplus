#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, i;
    cin >> N;

    vector<tuple<string, int, string, int>> v;

    for (i = 0; i < N; i++)
    {
        string nm, s;
        int cls, id;
        cin >> nm >> cls >> s >> id;
        v.push_back(make_tuple(nm, cls, s, id));
    }

    for (i = 0; i < N; i++)
    {
        string tempSection = get<2>(v[i]);
        if (i >= (N-1) - i)
        {
            break;
        }
        get<2>(v[i]) = get<2>(v[(N-1) - i]);
        get<2>(v[(N-1) - i]) = tempSection;
    }

    for (auto t : v)
    {
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << endl;
    }
    return 0;
}
