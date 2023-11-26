#include<bits/stdc++.h>
using namespace std;

int d,n,i;
long long s[1000005],kq,a;

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

    kq=s[1+d]-s[1-1];
    for(i=2;i<=n-d;i++)
        kq=max(kq,s[i+d]-s[i-1]);

    cout<<kq;
}
