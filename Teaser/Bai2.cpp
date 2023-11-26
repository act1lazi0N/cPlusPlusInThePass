#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a, b, c, d, v, x;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c >> d >>v;
// x = (vd-b)/(a-vc);
    int p, q;
    p = (v*d-b);
    q = (a-v*c);
    if (p == 0 && q == 0)
    {
        cout << "MULTIPLE";
    }
    else if (q == 0)
    {
        cout << "NONE";
    }
    else
    {
        cout << "X = " << p/__gcd(p, q) << "/" << q/__gcd(p, q);
    }

}
