#include<bits/stdc++.h>
using namespace std;
int a, b, k, cnt, ans[10], t;
void solve()
{
    t = 0;
    cnt = 0;
    for (int i = -9; i <= 9; i++)
    {
        if((k - (i * a)) % b == 0)
        {
            cnt++;
            ans[t] = i;
            t++;
        }
    }
     cout << cnt << "\n";
     for (int j = 0; j < abs(t); j++)
     {
         cout << ans[j] << " " << (k - (ans[j] * a)) / b << "\n";
     }
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        // ax + by = k
        cnt = 0;
        cin >> a >> b >> k;
        solve();
    }
}
