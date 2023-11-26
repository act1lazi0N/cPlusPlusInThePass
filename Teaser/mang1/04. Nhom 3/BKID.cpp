#include <bits/stdc++.h>
#define N 100001
using namespace std;
int n,chiso;
long a[N];
int main()
{
    freopen("BKID.INP","r",stdin);
    freopen("BKID.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    chiso = 1;
    for (int i=2; i<=n; i++)
    if (a[chiso] > a[i])
    {
        cout << chiso << '\n';
        chiso = i;
    }
    else cout << i << '\n';
    return 0;
}
