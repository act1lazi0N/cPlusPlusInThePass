#include <bits/stdc++.h>

using namespace std;

long long n,a[1001],r,s;

int main()
{
    //freopen("DBANNER.inp","r",stdin);
    //freopen("DBANNER.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        s=1;
        for (int j=i-1;j>=1;j--)
        if (a[j]>=a[i]) s++;
        else break;
        for (int j=i+1;j<=n;j++)
        if (a[j]>=a[i]) s++;
        else break;
        r=max(r,s*a[i]);
    }
    cout<<r;
}
