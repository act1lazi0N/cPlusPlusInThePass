#include<bits/stdc++.h>
using namespace std;

long long n,r,c,d,ot,t,x;

int main()
{
    freopen("PYRAMID.INP","r",stdin);
    freopen("PYRAMID.OUT","w",stdout);

    cin>>n>>r>>c;

    d=ceil(sqrt(n));
    t=d*2-1;
    x=n-(d-1)*(d-1);
    if(d%2==0)
        ot=x;
    else
        ot=t-x+1;

    cout<<d<<' '<<ot<<'\n';

    x=r*r;
    t=r*2-1;
    if(r%2==1)
        x=x-c+1;
    else
        x=x-t+c;

    cout<<x;
}
