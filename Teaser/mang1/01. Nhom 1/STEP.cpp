#include <bits/stdc++.h>

using namespace std;
int n, a;

bool KT(int x)
{
    if (x < 10) return false;
    int t = x % 10;
    x = x / 10;
    while (x > 0)
    {
        int y = x % 10;
        if (t < y) return false;
        t = y;
        x = x / 10;
    }
    return true;
}

int main()
{
    freopen("STEP.inp", "r",stdin);
    freopen("STEP.out", "w", stdout);
    cin >> n;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (KT(a) == true) d++;
    }
    cout << d;
    return 0;
}
