#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int TC;
    cin >> TC;
    cin.ignore();
    while(TC--)
    {
       ll a, x, y;
       cin >> a >> x >> y;
       ll g = gcd(x, y);
       for (int i = 0; i < g; i++)
       {
           cout << a;
       }
       cout << endl;

    }
    return 0;
}
