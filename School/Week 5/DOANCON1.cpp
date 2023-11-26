#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100001], res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long dp [100001] = {0};
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = i + 1; i < i; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        res = max(res, dp[i]);
    }
    cout << res;

}
