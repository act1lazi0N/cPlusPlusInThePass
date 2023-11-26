#include<bits/stdc++.h>
#define inf 1e9
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = inf;
    long d;
    if (a > b)
    {
        d = a; a = b; b = d;
    }
    if (b > c)
    {
        d = b; b = c; c = d;
    }
    if (a > c)
    {
        d = a; a = c; c = d;
    }
    if (a + b > c)
    {
        ans = 0;
    }
    else
    {
        ans = c-(a+b)+1;
    }
    cout << ans;
}
