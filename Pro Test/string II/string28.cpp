#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s == "") break;
        if (s[i] == '1' && s[i+i] == '0' && s[i+2] == '0')
        {
            ans += 3;
            s.erase(i, 3);
            i = -1;
        }
    }
    cout << ans << " ";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s);
    }
}
v
