#include <bits/stdc++.h>

using namespace std;
int n,a[1001][1001],mx[2001],mn[2001];
int main()
{
    //freopen("2507.inp","r",stdin);
    //freopen("2507.out","w",stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            mx[i-j+n]=-1e9;
            mn[i+j]=1e9;
        }

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            mx[i-j+n]=max(mx[i-j+n],a[i][j]);
            mn[i+j]=min(mn[i+j],a[i][j]);
        }
    long long ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]==mx[i-j+n]&&a[i][j]==mn[i+j])
                ans+=a[i][j];
    cout<<ans;
}
