#include<bits/stdc++.h>
using namespace std;
int n,s[1005][1005],i,j,a[1005];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>s[i][j];
    for(i=1;i<n-1;i++)
        a[i+1]=(s[i][i+1]+s[i+1][i+2]-s[i][i+2])/2;
    a[1]=s[2][1]-a[2];
    if(a[1]==s[2][1]) a[1]=1;
    a[n]=s[1][n]-a[1];
    cout<<a[1];
    for(int i=2;i<=n;i++)
        cout<<' '<<a[i];
}
