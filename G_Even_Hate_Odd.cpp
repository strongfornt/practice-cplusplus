#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, odd, even;

    cin >> t;
    vector<vector<int>> results;

    while (t--)
    {
        cin >> n;

        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }

        results.push_back(temp);
    }

    for (auto v : results)
    {   
        odd = 0;
        even = 0;
        for (auto num : v)
        {
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << even << " " << odd << endl;
    }

    return 0;
}