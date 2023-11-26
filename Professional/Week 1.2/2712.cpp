#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int m, n;
        cin >> m >> n;
        if (m == 1 && n == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        if (m > n)
        {
            cout << (n - 1) + n + (m - 1) << "\n";
        }
        else
        {
            cout << (m - 1) + m + (n - 1) << "\n";
        }

    }
}
