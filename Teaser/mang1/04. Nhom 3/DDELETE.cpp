#include <bits/stdc++.h>
#define N 1000001
using namespace std;
int n,a[N];
long le, chan,s;
int main()
{
    freopen("DDELETE.INP","r",stdin);
    freopen("DDELETE.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        s += a[i];
        if (a[i] % 2 == 0) chan++; else le++;
    }
    if (s % 2 == 0) cout << chan*(chan-1)/2 + le*(le-1)/2;
    else cout << chan*le;
    return 0;
}
