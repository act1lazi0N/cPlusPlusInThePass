#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n+1][n+1];
    int dcp[2*n],dcc[2*n];
    for(int y=1;y<=n;y++)
    {
       for(int x=1;x<=n;x++)
       {
           cin>>a[x][y];
           dcp[x+y-1]=a[x][y];
           dcc[n+y-x]=a[x][y];
       }
    }
    for(int y=1;y<=n;y++)
    {
       for(int x=1;x<=n;x++)
       {
           dcp[x+y-1]=min(a[x][y],dcp[x+y-1]);
           dcc[n+y-x]=max(a[x][y],dcc[n+y-x]);
       }
    }
    long long kq=0;
    for(int y=1;y<=n;y++)
    {
       for(int x=1;x<=n;x++)
       {
           if(a[x][y]==dcc[n+y-x]&&a[x][y]==dcp[x+y-1])
           {
               kq+=((long long)a[x][y]);
           }
       }
    }
    cout<<kq;
}
