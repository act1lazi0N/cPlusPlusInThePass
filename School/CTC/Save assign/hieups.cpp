#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, i;
    cin >> a >> b;
    cin >> c >> d;

    if (b != d)
    {
        e = b * d;
        f = a*d - b * c;
    }
    if (b == d)
    {
        f = a - c;
    }
    if (a/b > c/d)
    {
        e = e / __gcd(f, e);
        f = f / __gcd(f, e);
        cout << e << "/" << f;
    }
    else
    {
        e = e / __gcd(f, e);
        f = f / __gcd(f, e);
        i = abs(e);
        cout << "-" << f << "/" << i;
    }

}
