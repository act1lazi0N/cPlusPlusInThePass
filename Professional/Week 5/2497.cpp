#include <bits/stdc++.h>
using namespace std;
long long x;
int tongcs (long long n)
{
    // tổng các chữ số của số n;
    int t = 0;
    while (n > 0)
    {
        t += n % 10;
        n /= 10;
    }
    return t;
}
int main()
{
    //freopen ("2497.INP", "r", stdin);
    //freopen ("2497.OUT", "w", stdout);
    cin >> x;
    long long ans = x;
    for (long long p = 10; p <= x; p *= 10)
    {
        long long y = (x / p) * p - 1;
        if (tongcs(y) > tongcs (ans)) ans = y;
    }
    cout << ans;
    return 0;
}
