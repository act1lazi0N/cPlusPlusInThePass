#include<bits/stdc++.h>
using namespace std;

int a[10005];
long long s[10005];
int n, q, x, y;
int main()
{
    cin >> n >> q;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i = 1; i <= q; i++)
    {
        cin >> x >> y;
        cout << s[y] - s[x-1] << "\n";
    }
}
