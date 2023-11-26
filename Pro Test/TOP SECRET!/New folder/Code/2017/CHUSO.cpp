#include<bits/stdc++.h>
using namespace std;

int l,r,h,i,ans=0;

bool ktra(int x,int y)
{
    int t=0;
    for(;x!=0;)
    {
        t+=(x%10);
        if(t>y) return 0;
        x/=10;
    }
    if(t!=y) return 0;
    else return 1;
}

int main()
{
    freopen("CHUSO.INP","r",stdin);
    freopen("CHUSO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>l>>r>>h;

    for(i=l;i<=r;i++)
        if(ktra(i,h)==1) ans++;

    cout<<ans;
}
