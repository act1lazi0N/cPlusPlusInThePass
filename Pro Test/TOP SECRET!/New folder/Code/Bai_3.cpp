#include<bits/stdc++.h>
using namespace std;
int n,a,b,m,i,j,t,c[205][205];
long long kq=0;
void swap1(int& a,int& b)
{
  t=a;
  a=b;
  b=t;
}
int main()
{
    freopen("MUAKEM.IN","r",stdin);
    freopen("MUAKEM.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        if(a>b) swap1(a,b);
        c[a][b]=1;
    }
    for(i=1;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
            if(c[i][j]==0)
                for(t=j+1;t<=n;t++)
                    if(c[j][t]==0&&c[i][t]==0)
                        kq++;
    cout<<kq;
}
