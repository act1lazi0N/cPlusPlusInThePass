#include<bits/stdc++.h>
using namespace std;

int n,a[100005],best[100005],m=0,b[100005];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<n;i++)
    {
        best[i]=lower_bound(b+1,b+1+m,a[i])-b;
        b[best[i]]=a[i];
        m=max(m,best[i]);
    }

    cout<<m;
}
