#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string S;
    // getline(cin, S);

    // cout << S[0] << endl;

    // string Jessica = "Jessica";

    // bool found = false;

    // stringstream ss(S);
    // string word;

    // while (ss >> word)
    // {
    //     if (word == Jessica)
    //     {
    //         found = true;
    //         break;
    //     }
    // }

    // if (found)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    string s = "hello world C++ programming";
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i]; // character add
        }
        else
        {
            cout << word << endl; // word শেষ হলে print
            word = "";            // reset next word
        }
    }

    // // last word print
    // if (word != "")
    // {
    //     cout << word << endl;
    // }

    return 0;
}