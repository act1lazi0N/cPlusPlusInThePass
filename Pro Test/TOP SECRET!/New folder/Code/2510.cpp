#include <bits/stdc++.h>
using namespace std;
long long x[100001],s[100001],h[100001];
int main()
{
    freopen("2510.INP","r",stdin);
    freopen("2510.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,vt=1;
    cin>>n;
    long long kq=LONG_LONG_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]=s[i-1]+s[i];
    }
    for (int i=1;i<=n;i++)
        cin>>x[i];
    for (int i=0;i<n;i++)
        h[i+1]=h[i]+(x[i+1]-x[i])*(2*s[i]-s[n]);
    for (int i=1;i<=n;i++)
        if (h[i]<kq)
        {
            kq=h[i];
            vt=i;
        }
    cout<<x[vt];
}
