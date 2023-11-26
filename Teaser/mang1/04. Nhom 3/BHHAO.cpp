#include <bits/stdc++.h>

long a[101];
using namespace std;
int n;
int tongcs(int a)
{
    int s = 0;
    while (a > 0)
    {
        s += a % 10;
        a/= 10;
    }
    return s;
}
bool sohh(int a)
{
    int s = 1;
    for (int i = 2; i*i<=a; i++)
    if (a % i == 0)
    {
        s += i + a/i;
        if (i*i==a) s -= i;
    }
    return s == a;
}
int main()
{
    freopen("BHHAO.INP", "r",stdin);
    freopen("BHHAO.OUT","w",stdout);
    cin >> n;
    int d = 0;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        if (sohh(tongcs(a[i]))) d++;
    }
    cout << d;
    return 0;
}
