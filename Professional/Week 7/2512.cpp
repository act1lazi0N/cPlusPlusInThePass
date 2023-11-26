#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    freopen("2512.inp", "r", stdin);
    freopen("2512.out", "w", stdout);
    ll n,k,b,ans=1, t;
    cin >> n >> k >> b;
    ll a[n];
    for(ll i=0; i<n;i++)
        cin >> a[i];
    sort (a,a+n);
    t=a[0];
    for(ll i=1; i<n; i++)
    {
        if (a[i] >= t*k+b)
        {
            t=a[i];
            ans++;
        }
    }
    cout << ans;
}
