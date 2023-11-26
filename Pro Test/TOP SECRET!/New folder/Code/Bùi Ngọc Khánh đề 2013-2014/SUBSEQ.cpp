#include<bits/stdc++.h>
using namespace std;

int n,t=0,i,kq=0;
long long k,a;

int main()
{
    freopen("SUBSEQ.INP","r",stdin);
    freopen("SUBSEQ.OUT","w",stdout);

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%k==0)
            t++;
        else
        {
            kq=max(kq,t);
            t=0;
        }
    }
    kq=max(kq,t);

    cout<<kq;
}
