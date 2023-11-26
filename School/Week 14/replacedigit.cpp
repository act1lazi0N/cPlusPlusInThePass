#include<bits/stdc++.h>
using namespace std;
int n; string s;
using ll = long long;
void solve()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '5';
        }
        cout << s[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    while(n--)
    {
        cin >> s;
        solve();
    }
}
