#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if (s.length() < 26)
        {
            cout << 0 << endl;
            continue;
        }
        set<char> se;
        for (char x : s)
        {
            se.insert(x);
        }
        if (26 - se.size() <= k)
        {
            cout << "1\n";

        }
        else{
            cout << "0\n";
        }
    }

}
