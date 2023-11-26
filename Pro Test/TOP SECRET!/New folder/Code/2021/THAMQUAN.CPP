#include<bits/stdc++.h>
using namespace std;

long long a,sa[100005],kq[100005],b,n,m,i,vt;

int main()
{
    freopen("THAMQUAN.INP","r",stdin);
    freopen("THAMQUAN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    sa[0]=0;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        sa[i]=sa[i-1]+a;
    }

    for(i=1;i<=m;i++)
    {
        cin>>b;
        vt=lower_bound(sa+1,sa+1+n,b)-sa;
        if(vt>n)
            vt=n;
        if(sa[vt]>b)
            vt--;
        kq[i]=vt;
    }
    cout<<kq[1];
    for(i=2;i<=m;i++)
        cout<<' '<<kq[i];
}
