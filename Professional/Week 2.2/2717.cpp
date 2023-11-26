#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        if (n % 3 == 0)
        {
            cout << n / 3 << "\n";
            continue;
        }
        else
        {
            cout << (n / 3) + 1 << "\n";
            continue;
        }
    }
}
