#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
using namespace std;


int main()
{
    int m,n;cin>>m>>n;
    int w,h;cin>>w>>h;
    ll int a[m+1],b[n+1];
    a[0]=0;b[0]=0;
    for(int i=1;i<=m;i++)
    {
        int t;
        cin>>t;
        a[i]=a[i-1]+t;
    }
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        b[i]=b[i-1]+t;
    }
    ll int ans1,max1_1=-1e9,max1_2=-1e9;
    for(int i=1;i<=m-w+1;i++)
    {
        int t=a[i+w-1]-a[i-1];
        if (t>max1_1) max1_1=t;
    }
    for(int i=1;i<=n-h+1;i++)
    {
        int t=b[i+h-1]-b[i-1];
        if (t>max1_2) max1_2=t;
    }
    ans1=max1_1*h+max1_2*w;
    cout<<ans1;
}
