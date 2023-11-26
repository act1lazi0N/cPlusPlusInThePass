#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,x,y,k,p[105][105],t,kq=0,r;

int main()
{
    freopen("RADAR.IN","r",stdin);
    freopen("RADAR.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n>>k;

    for(t=0;t<k;t++)
    {
        cin>>x>>y>>r;
        for(i=max(1,x-r);i<=min(x+r,m);i++)
            for(j=max(1,y-r);j<=min(y+r,n);j++)
                p[j][i]=1;
    }

    for(j=1;j<=n;j++)
        for(i=1;i<=m;i++)
            if(p[j][i]==0) kq++;

    cout<<kq;
}
