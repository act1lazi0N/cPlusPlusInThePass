#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N];
long long s[N];
int n,q,x,y;
int main()
{
    freopen("QSUM.INP","r",stdin);
    freopen("QSUM.OUT","w",stdout);
    cin >>n>>q;
    s[0]=0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }
    for (int i=1;i<=q;i++)
    {
        cin >>x>>y;
        cout << s[y]-s[x-1]<<endl;
    }
    return 0;
}
