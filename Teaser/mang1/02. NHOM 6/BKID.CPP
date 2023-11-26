#include <bits/stdc++.h>

using namespace std;
const int nmax = 1e5+1;
int a[nmax],n,cs;
int main()
{
    freopen("BKID.INP","r",stdin);
    freopen("BKID.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    cs = 1;
    for (int i=2; i<=n; i++)
    if (a[cs] > a[i])
    {
        cout << cs << '\n';
        cs = i;
    }
    else cout << i << '\n';
    return 0;
}
