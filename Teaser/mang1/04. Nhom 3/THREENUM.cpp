#include <bits/stdc++.h>
#define N 100001
using namespace std;
long a[N], mi[N], mk[N],smax;
int n;
int main()
{
    freopen("THREENUM.INP","r",stdin);
    freopen("THREENUM.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    mi[1] = a[1];
    for (int i=2; i<=n;i++)
    {
        mi[i]=a[i];
        if (mi[i]<mi[i-1]) mi[i]=mi[i-1];
    }
    mk[n] = a[n];
    for (int i=n-1; i>=1;i--)
    {
        mk[i]=a[i];
        if (mk[i]<mk[i+1]) mk[i]=mk[i+1];
    }

    for (int i=2; i<=n-1;i++)
        if (smax<2*mi[i-1]-3*a[i]+5*mk[i+1])
            smax=2*mi[i-1]-3*a[i]+5*mk[i+1];
    cout << smax;
    return 0;
}
