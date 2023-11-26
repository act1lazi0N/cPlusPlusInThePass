#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,res=0,x;
int main()
{
    freopen("ANTS.INP","r",stdin);
    freopen("ANTS.OUT","w",stdout);
    cin >>n>>k;
    for(int i=1;i<=n;i++)
    {
    ll tg;
    cin>>x;
    if(x>0)tg=k-x;
    if(x<0)tg=abs(x);
    res=max(res,tg);
    }
    cout<<res;
    return 0;
}
