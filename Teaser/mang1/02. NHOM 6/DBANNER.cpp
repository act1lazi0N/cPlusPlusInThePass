#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005];
ll s=0,tam;
int n;
int min1(int x, int y)
{
    int m=a[x];
    for (int i=x+1;i<=y;i++) if (m>a[i]) m=a[i];
    return m;
}
int main()
{
    freopen("DBANNER.INP","r",stdin);
    freopen("DBANNER.OUT","w",stdout);
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    s=0;
    for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            tam = a[i];
            for (int k=i;k<=j;k++) if (tam>a[k]) tam=a[k];
            tam=tam*(j-i+1);
            if (tam>s) s=tam;
        }
    }
    cout <<s;
    return 0;
}
