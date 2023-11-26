#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<ll> ans;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        vector<ll int> ans1, ans2;
        for (int i = 0; i < n; i++)
        {
            int x, r;
            cin >> x >> r;
            a[i].fi = x - r;
            a[i].se = x + r;
        }
        sort(a, a+n);
        ans1.pb(a[0].fi);
        ans2.pb(a[0].se);
        int u, v, m = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].fi <= ans2[m])
            {
                u = ans1[m];
                if (ans2[m] > a[i].se) v = ans2[m];
                else v = a[i].se;
                ans1.erase(ans1.begin()+m);
                ans2.erase(ans2.begin()+m);
                ans1.pb(u);
                ans2.pb(v);
            }
            else
            {
                ans1.pb(a[i].fi);
                ans2.pb(a[i].se);
                m++;
            }
        }
        ll int ans0 = 0;
        for (int i = 0; i < ans1.size(); i++)
        {
            ans0 += (ans2[i] - ans1[i]);
        }
        ans.pb(ans0);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
}

