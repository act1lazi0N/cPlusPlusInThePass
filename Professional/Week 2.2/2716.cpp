#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        cin >> n;
        ans += (ll)sqrt(n);
        ll tmp = (ll)cbrt(n);
        ans += tmp;
        ans -= (ll)sqrt(tmp);
        cout << ans << "\n";
    }
}
