#include <bits/stdc++.h>

using namespace std;
int n, a[101],p[101];

int main()
{
    freopen("NGHICHTHE1.INP","r",stdin);
    freopen("NGHICHTHE1.OUT","w",stdout);
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        cin >> a[i];
        for (int j=1;j<i;j++)
            if (a[j]>a[i]) p[i]++;
    }
    for (int i = 1; i<=n; i++) cout << p[i] << " ";

    return 0;
}
