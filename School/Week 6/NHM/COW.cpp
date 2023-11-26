#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int dp[N];
int main()
{
    int n;
    long S;
    cin >> n >> S;
    int tong = 0;
    int ans1, ans2;
    for (int i = 0; i < n + 2; i++)
    {
        cin >> dp[i];
        tong += dp[i];
    }
    for (int i = 0; i < n + 2 - 1; i++)
    {
        for (int j = i + 1; j < n + 2; j++)
        {
            if (S == tong - dp[i] - dp[j])
            {
                ans1 = dp[i];
                ans2 = dp[j];
                break;
            }
        }
    }
    for (int r = 0; r < n + 2; r++)
    {
        if (dp[r] != ans1 && dp[r] != ans2)
        {
            cout << dp[r] << endl;
        }
    }




}
