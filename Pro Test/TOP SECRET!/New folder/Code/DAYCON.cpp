#include<bits/stdc++.h>
using namespace std;

int d,n,i;
long long s[1000005],kq=LONG_LONG_MIN,a;

int main()
{
    freopen("DAYCON.INP","r",stdin);
    freopen("DAYCON.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>d;
    d--;
    s[0]=0;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        s[i]=s[i-1]+a;
    }

    for(i=1;i<=n-d;i++)
        kq=max(kq,s[i+d]-s[i-1]);

    cout<<kq;
}
