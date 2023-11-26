#include<bits/stdc++.h>
#define fi first
#define se second
#define ll long long
using namespace std;
int ans0[10001];
int main()
{
    int m, n;
    cin >> m >> n;
    pair<int, int> p[n];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> p[i].fi;
        p[i].se = i;
    }
    ll int ans = 0;
    sort(p, p + n);
    for (int i = 0; i < n && m > 0; i++)
    {
        if (m > a[p[i].se])
        {
            ans += (a[p[i].se] * p[i].fi);
            m -= a[p[i].se];
            ans0[p[i].se] = a[p[i].se];
        }
        else
        {
            ans += (m * p[i].fi);
            ans0[p[i].se] = m;
            m = 0;
        }
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans0[i] << "\n";
    }
}

