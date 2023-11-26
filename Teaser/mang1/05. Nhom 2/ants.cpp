#include<bits/stdc++.h>
using namespace std;
long long n,k,x,mx,d;
/**********************/
int main()
{
    freopen("ants.inp","r",stdin);
    freopen("ants.out","w",stdout);
/**/
    cin>>n>>k;
    for(long i=1;i<=n;i++)
    {
        cin>>x;
        if(x>0)
        {
            d=k-x;
            if(d>mx) mx=d;
        }
        else
        {
            d=abs(x);
            if(d>mx) mx=d;
        }
    }
    cout<<mx;
}
