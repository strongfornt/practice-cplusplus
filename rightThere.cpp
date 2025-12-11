#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<string> v;
    while (T--)
    {   
        int N, X;
        cin >> N >> X;

        if(X >= N) {
            v.push_back("YES");
        }else {
            v.push_back("NO");
        }

    }

    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}