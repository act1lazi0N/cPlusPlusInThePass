#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("2514.inp","r",stdin);
    //freopen("2514.out","w",stdout);
    long long a,n,m,q,k;
    cin>>n;
    long long b[n+1],t[n+1];
    for (int i=1;i<=n;i++)
        cin>>b[i]>>t[i];
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>q;
        k=lower_bound(b+1, b+n+1, q)-b;
        cout<<q*t[k-1]<<'\n';
    }
  return 0;
}


