#include<bits/stdc++.h>
using namespace std;
long n,a[100000],b[100000],c[100000],mx=0,so;
/**************************************/
int main()
{
    freopen("threenum.inp","r",stdin);
    freopen("threenum.out","w",stdout);

    cin>>n;
    cin>>a[0];
    b[0]=a[0]*2;
    mx=a[0];
    for(long i=1;i<n;i++)
    {

        cin>>a[i];
        if(a[i]>mx) mx=a[i];
        b[i]=mx*2;
    }

    c[n-1]=a[n-1]*5;
    mx=a[n-1];
    for(long i=n-2;i>=0;i--)
    {
        if(a[i]>mx) mx=a[i];
        c[i]=mx*5;
    }

    mx=b[0]-3*a[1]+c[2];
    for(long i=2;i<n-1;i++)
    {
        so=b[i-1]-3*a[i]+c[i+1];
        if(so>mx) mx=so;
    }
    cout<<mx;
}
