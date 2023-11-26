#include<bits/stdc++.h>
using namespace std;

int solve(int k)
{
    int cnt = 0;
    for (int r = 19; ; r += 9)
    {
        int sum = 0;
        for (int x = r; x > 0; x /= 10)
        {
            sum += x % 10;
        }
        if (sum == 10)
        {
            cnt++;
        }
        if (cnt == k)
            return r;
    }
    return -1;
}

int main()
{
    int k;
    cin >> k;
    cout << solve(k);
    return 0;
}
