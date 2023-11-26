#include<bits/stdc++.h>
using namespace std;
int t,p[20005][5];
int ham(int x,int y)
{
    if(y==1) return 1;
    if(x==0) return 1;
    if(p[x][y]!=0) return p[x][y];
    for(int i=1;i<=x-y+1;i++)
    {
        p[x][y]*=ham(x-i,y-1);
    }
    return p[x][y];
}
int main()
{
    cin>>t;
    cout<<ham(t,4);
}
