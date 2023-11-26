#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(a, a+n);
    sort(c, c + n);
    int x = 0, y = n - 1, t, ans;
    ans = abs(a[x] + c[y]);
    for (;x < n && y >= 0;)
    {
        t = a[x] + c[y];
        ans = min(ans, abs(t));
        if (ans == 0) break;
        if (t < 0) x++;
        if (t > 0) y--;
    }
    cout << ans;
}


