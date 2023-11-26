#include <bits/stdc++.h>

using namespace std;
int n;
bool shh(int x)
{
    int s = 1;
    for (int i = 2; i<=sqrt(x); i++)
    if (x % i == 0)
    {
        s += i + x/i;
        if (i*i==x) s -= i;
    }
    return s == x;
}
int tong(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main()
{
    cin >> n;
    int d = 0;
    for (int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if (shh(tong(x))) d++;
    }
    cout << d;
    return 0;
}
