#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b;
    cin >> c >> d;

    if (b != d)
    {
        e = b * d;
        f = a*d + b * c;
    }
    if (b == d)
    {
        f = a + c;
    }
    while (__gcd(e, f) > 1)
    {
        e = e / __gcd(e, f);
        f = f / __gcd(e, f);
    }
    cout << f << "/" << e;

}
