#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, b, s, a[100001];
        cin >> n >> k >> b >> s;
        if (b * k > s)
        {
            cout << "-1\n";
            continue;
        }
        a[1] = b * k;
        s -= a[1];
        if (s > n * (k - 1))
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            int v = min(s, k - 1);
            if (i == 1)
                a[i] += v;
            else
                a[i] = v;
            s -= v;
        }
        for (int i = 1; i <= n - 1; i++)
            cout << a[i] << " ";
        cout << a[n] << "\n";
    }
}
