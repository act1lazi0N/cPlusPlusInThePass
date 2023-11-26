#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tt=0,n,a;
int main()
{
   // freopen ("2506.inp", "r", stdin);
    //freopen ("2506.out", "w", stdout);
    cin >> n;
    while (n--)
    {
        cin >> a;
        tt=__gcd(tt,a);
    }
    ll ans=0;
    for (ll i=1;i<=sqrt(tt);i++)
    {
        if (tt%i==0)
            ans+=2;
    }
    if (ll(sqrt(tt))==sqrt(tt))
        ans--;
    cout << ans;

}
