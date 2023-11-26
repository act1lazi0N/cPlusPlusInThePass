#include <bits/stdc++.h>

using namespace std;
int n, d=0;

bool kt(int x)
{
    int k = x % 10;
    x = x/10;
    while (x > 0)
    {
        int d = x%10;
        if (k < d) return 0;
        k = d;
        x /= 10;
    }
    return 1;
}
int main()
{
    freopen("STEP.INP","r",stdin);
    freopen("STEP.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int t;
        cin >> t;
        if (t>10 && kt(t)) d++;
    }
    cout << d;
    return 0;
}
