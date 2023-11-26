#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> ss; // int a[26] = {0};
    for (char x : s) // char x : a
    {
        ss.insert(x); // a[x - 'a'] = 1;
    }
    if (ss.size() == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    /** for (int i = 0;i < 26; i++)
    {
        if (!a[i])
        {
        cout << "NO";
        return 0;
        }
    }
    cout << "YES";
    **/

}
