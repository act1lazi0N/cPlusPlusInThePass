#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += n / i;

    }
    return ans;
}

int main()
{
    int n, p;
    int NC;
    cin >> NC;
    while(NC--)
    {
        cin >> n >> p;
        cout << cnt(n, p) << "\n";
    }
}
