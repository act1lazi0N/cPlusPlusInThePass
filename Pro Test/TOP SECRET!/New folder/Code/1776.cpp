#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;cin>>n;
        int a[100005],p[100005];
        for(int j=0;j<n;j++)
            cin>>a[j];
        p[n-1]=1;
        for(int j=n-2;j>=0;j--)
        {
            if((a[j]>0&&a[j+1]<0)||(a[j]<0&&a[j+1]>0))
                p[j]=p[j+1]+1;
            else
                p[j]=1;
        }
        cout<<p[0];
        for(int j=1;j<n;j++)
            cout<<' '<<p[j];
        cout<<'\n';
    }
}
