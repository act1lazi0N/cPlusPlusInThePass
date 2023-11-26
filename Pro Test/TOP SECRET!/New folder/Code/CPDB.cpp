#include<bits/stdc++.h>
using namespace std;

int a,b,l,r,dem=0,i;

bool ktra(int n)
{
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==3) return 0;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return 0;
    return 1;
}

int main()
{
    freopen("CPDB.INP","r",stdin);
    freopen("CPDB.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    if(a<=6561&&6561<=b)
        dem++;

    l=ceil(sqrt(a/9));
    r=floor(sqrt(b/9));

    for(i=l; i<=r; i++)
        if(ktra(i)==1)
            dem++;

    cout<<dem;
}
