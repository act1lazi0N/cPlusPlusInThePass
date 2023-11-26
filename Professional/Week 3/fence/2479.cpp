#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("2749.INP", "r", stdin);
    freopen("2749.OUT", "w", stdout);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long d;
        int a, b, c;
        cin >> a >> b >> c;

        d = max(a, max(b, c)) + min(a, min(b, c));
        cout << d << "\n";

    }

    return 0;
}
