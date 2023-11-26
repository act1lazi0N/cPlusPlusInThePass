#include<bits/stdc++.h>
using namespace std;
void solve(string s, int k)
{
    cin >> s >> k;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        //xet tat ca cac xau con bat dau tu tung chi so 1 trong xau s
        int cnt[256];
        memset(cnt, 0, sizeof(cnt));
        int d = 0;
        for (int j = 1; j < s.length(); j++)
        {
            if (cnt[s[j]] == 0)
            {
                ++d;
            }
            if (d == k)
            {
                ++ans;
            }
            if (d > k)
                break;
                cnt[s[j]] = 1;
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
    while(TC--)
    {
        solve(s, k);
    }
    return 0;
}
