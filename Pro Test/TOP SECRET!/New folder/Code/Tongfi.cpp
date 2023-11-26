#include<bits/stdc++.h>
using namespace std;
int f[100005],t=1000000007,sf[100005],i;
int main()
{
    int n;
    f[0]=0;
    f[1]=1;
    sf[0]=0;
    sf[1]=1;
    for(i=2;i<=100000;i++)
    {
        f[i]=(f[i-1]%t+f[i-2]%t)%t;
        sf[i]=(sf[i-1]+f[i])%t;
    }
    cin>>n;
    while(n--)
    {
        int q;cin>>q;
        cout<<sf[q]<<' ';
    }
}
