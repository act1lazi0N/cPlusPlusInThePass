#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    bool a[1001];
    while(t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        memset(a, false, sizeof(a));
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = true;
        }
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            if (a[x])
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
