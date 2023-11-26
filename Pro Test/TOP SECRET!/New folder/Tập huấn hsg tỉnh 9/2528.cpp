#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("2528.inp","r",stdin);
    //freopen("2528.out","w",stdout);
    int n,ans=-1;
    cin>>n;
    int p[2*n+1];
    for (int i=1;i<=2*n;i++)
        cin>>p[i];
    int cyc=(n%2==0? 4 : 2*n);
    for(int i=0;i<cyc;i++)
    {
        if(is_sorted(p+1,p+2*n+1))
        {
            ans=min(i,cyc-i);
            break;
        }
        if (i%2==0)
        {
            for(int j=1;j<2*n;j+=2)
                swap(p[j],p[j+1]);
        }
        else
        {
            for(int j=1;j<=n;j++)
                swap(p[j],p[n+j]);
        }
    }
    cout<<ans;
    return 0;
}
