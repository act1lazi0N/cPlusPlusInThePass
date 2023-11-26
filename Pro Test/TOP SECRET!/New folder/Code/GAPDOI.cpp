#include<bits/stdc++.h>
using namespace std;

int n,a[2500005],dem=0,kq=INT_MAX,p[32005],i;

int main()
{
    freopen("GAPDOI.INP","r",stdin);
    freopen("GAPDOI.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]=1;
    }

    for(i=0;i<n;i++)
    {
        if(p[a[i]/2]==1&&a[i]%2==0)
        {
            dem++;
            kq=min(kq,a[i]);
        }
    }

    cout<<dem<<' '<<kq;
}
