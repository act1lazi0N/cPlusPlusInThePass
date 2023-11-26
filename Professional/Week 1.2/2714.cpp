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
        int k, a, b, c;
        cin >> k >> a >> b >> c;
        vector<int> v = {a, b, c};
        int cnt = 0;
        k = v[k - 1];
        if (k != 0)
        {
            cnt++;
            k = v[k-1];
        }
        if (k != 0)
        {
            cnt++;
            k = v[k-1];
        }
        if (k != 0)
        {
            cnt++;
            k = v[k-1];
        }
        if (cnt == 2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }

    }
}
