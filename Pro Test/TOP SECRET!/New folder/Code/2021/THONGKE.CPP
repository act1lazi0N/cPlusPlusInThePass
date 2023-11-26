#include<bits/stdc++.h>
using namespace std;

int n,kq0=0,kq[105],i,j,x,y,ok,t;
string h;

int ham(string s)
{
    t=0;
    ok=0;
    x=1;
    for(j=s.size()-1;j>=0;j--)
    {
        if(s[j]=='F'&&s[j+1]=='0')
        {
            ok=1;
            continue;
        }
        if(s[j]=='-')
        {
            ok=0;
            x=1;
            continue;
        }
        if(ok==1)
        {
            y=s[j]-'0';
            t+=(x*y);
            x*=10;
        }
    }
    return t;
}

int main()
{
    freopen("THONGKE.INP","r",stdin);
    freopen("THONGKE.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>h;
        h='-'+h;
        kq[i]=ham(h);
        kq0=max(kq0,kq[i]);
    }

    cout<<kq0<<'\n';
    for(i=0;i<n;i++)
        cout<<kq[i]<<'\n';
}
