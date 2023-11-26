#include<bits/stdc++.h>
using namespace std;
int a[105][105],kq=INT_MAX,p[105][105],n,m;
int ham(int x,int y)
{
    if(x==m) return a[m][y];
    if(p[x][y]!=-1) return p[x][y];
    p[x][y]=a[x][0]+ham(x+1,y);
    for(int i=0; i<=n; i++)
    {
        if(y-i<0) break;
        p[x][y]=min(p[x][y],a[x][i]+ham(x+1,y-i));
    }
    return p[x][y];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            p[i][j]=-1;
        }
    for(int i=0; i<=n; i++)
        kq=min(kq,a[1][i]+ham(2,n-i));
    cout<<kq;
}
