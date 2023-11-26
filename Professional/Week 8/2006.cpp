#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10001];
int main()
{
    ll m; int n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    ll t = 0;
    while(m - a[t] >= 0)
    {
        m -= a[t];
        cnt++;
        t++;
        if (t >= n)
            break;
    }
    cout << cnt;
}
