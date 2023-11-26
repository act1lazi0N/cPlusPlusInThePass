#include<bits/stdc++.h>
using namespace std;
int ham(int x)
{
    int t=1;
    for(;x!=0;)
    {
        t*=10;
        x/=10;
    }
    return t;
}
int main()
{
    int n,m,x;cin>>n>>m;
    int t=ham(n);
    x=m/t;
    x=x*t+n;
    if(x>m) x=x/t-1;
    else x=x/t;
    cout<<x+1;
}
