#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt_even = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                cnt_even++;
        }
        int cnt_odd = n - cnt_even;
        cout << min(cnt_even, cnt_odd) << "\n";

    }
    return 0;
}
