#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char x : s)
    {
        mp[x]++;
    }
    int len = mp.size();
    int ans = INT_MAX, l = 0, d = 0;
    int dem[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        dem[s[i]]++;
        if (dem[s[i]] == 1) ++d;
        if (cnt == len) {
            while(dem[s[l]] > 1)
            {
                dem[s[l]]++;
                ++l;
            }
            ans = min(ans, i - l + 1);
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TC;
    cin >> TC;
    cin.ignore();
    while(TC--)
    {
        solve();
    }
    return 0;
}
