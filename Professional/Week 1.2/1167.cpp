#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    long S = 0, cnt = 0;
    cin >> n;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if (i != n / i)
            {
                cnt+=2;
                S+= i + n/i;
            }
            else
            {
                ++cnt;
                S += i;
            }
        }

    }
    cout << cnt << " " << S;
}
