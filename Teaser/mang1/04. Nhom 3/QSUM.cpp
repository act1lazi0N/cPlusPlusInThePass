#include <bits/stdc++.h>
#define N 100001
using namespace std;
int a[N];
long s[N];
int n,q,i,j;

int main()
{
    freopen("QSUM.INP","r",stdin);
    freopen("QSUM.OUT","w",stdout);
    cin >> n >> q;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }
    while(q--)
    {
        cin >> i >> j;
        cout << s[j]-s[i-1]  <<'\n';
    }
    return 0;
}
