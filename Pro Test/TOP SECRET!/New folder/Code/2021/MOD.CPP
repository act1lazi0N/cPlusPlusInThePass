#include<bits/stdc++.h>
using namespace std;

long long a,n,s1,s2,s;

int main()
{
    freopen("MOD.INP","r",stdin);
    freopen("MOD.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>n;

    s1=a%1000000007;
    s2=(n*(n+1))/2;
    s2=s2%1000000007;
    s=(s1*s2)%1000000007;

    cout<<s;
}
