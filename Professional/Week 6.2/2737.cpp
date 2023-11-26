#include<bits/stdc++.h>
using namespace std;
int n, k, a[101];
long long ans;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {

        cin >> n >> k;
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            int j = i % k;
            a[j] = max(a[i], a[j]);
        }
        ans = 0;
        for (int i = 0; i <= k - 1; i++)
        {
            ans += a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
