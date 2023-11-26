#include<bits/stdc++.h>
using namespace std;
int ds(string s)
{
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        while (s[i+1] == s[i])
        {
            s.erase(i, 1);
        }
    }
    return s.length();
}
void solve(string s, int n)
{
    int cnt[n + 1];
    fill(cnt +1, cnt + n + 1, 0);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j <= s.length(); j++)
        {
            cnt[ds(s.substr(i, j - i))]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << endl << cnt[i];
    }
}
int main()
{
    string s;
    cin >> s;
    cout << ds(s);bc

    solve(s,ds(s));
    return 0;
}
