#include<bits/stdc++.h>
using namespace std;
int p[5][100005],kq[5],t[5],a[5][100005],n[5],kq0=INT_MAX;
int ham(int x,int y)
{
    if(x==4) return 0;
}
int main()
{
    for(int i=1; i<=4; i++)
    {
        cin>>n[1];
        for(int j=1; j<=n[1]; j++)
        {
            cin<<a[i][j];
            p[i][j]=-1;
        }
        sort(a[i]+1,a[i]+1+n[i]);
    }
    for(int i=1;i<=n[1];i++)
    {

    }
}
