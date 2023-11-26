#include<bits/stdc++.h>
#define ll long long
using namespace std;
unsigned ll int n, r;
vector<ll> v;
int p[1000001];
void sieve()
{
    memset(p, 0, sizeof(p));
    p[0] = p[1] =  1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (p[i] == 0)
        {
            for (int j = i*i; j <= n; j += i)
            {
                p[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1e6; i++)
    {
        if (p[i] == 0)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sieve();
        ll l = 1, r = v[v.size()-2];
        while(l < r)
        {
            ll mid;
            if ((l + r)%2== 0)
            {
                mid = (l + r)/2;
            }
            else
            {
                mid = (l + r)/2 + 1;
            }
            ll g = 1ll*v[mid-1]*v[mid]*v[mid+1];
            if (g <= n)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << v[l - 1]*v[l]*v[l + 1] << "\n";
    }
}
