#include<bits/stdc++.h>
using namespace std;
long n,a[1001],mx=0,s,l,r;
/**********************/
int main()
{
    freopen("dbanner.inp","r",stdin);
    freopen("dbanner.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int i=1;
    a[0]=0;
    a[n+1]=0;
    while(i<=n)
    {
        l=i-1;
        r=i+1;
        while(a[l]>=a[i]) l--;
        while(a[r]>=a[i]) r++;
        s=(r-l-1)*a[i];
        if(s>mx) mx=s;
        i++;
        while(a[i]==a[i-1]) i++;
    }
    cout<<mx;
}
