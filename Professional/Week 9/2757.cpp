#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m, n, x, y, d;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> x >> y >> d;
        if ((x - d > 1 && y + d < n) || (y - d > 1 && x + d < m))
        {
            cout << m -1 + n - 1 << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}
