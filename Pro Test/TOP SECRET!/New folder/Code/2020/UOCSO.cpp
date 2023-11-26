#include<bits/stdc++.h>
using namespace std;

int n,a,b,h,t=0,i,j;
int d[1000005];

int main()
{
    freopen("UOCSO.INP","r",stdin);
    freopen("UOCSO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(int j=0; j<n; j++)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        h=1;
        for(int i=2; i*i<=b; i++)
        {
            t=0;
            if(a%i==0)
            {
                t=1;
                d[i]=0;
                for(; a%i==0;)
                {
                    d[i]++;
                    a/=i;
                }
            }
            if(b%i==0)
            {
                if(t==0)
                {
                    d[i]=0;
                    t=1;
                }
                for(; b%i==0;)
                {
                    d[i]++;
                    b/=i;
                }
            }
            if(t==1)
                h*=(d[i]+1);
        }
        if(a!=1) h*=2;
        if(b!=1) h*=2;
        cout<<h<<'\n';
    }
}
