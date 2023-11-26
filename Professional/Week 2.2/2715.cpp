#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long m, n, cnt = 0;
        cin >> m >> n;
        cnt += (m % 2);
        cnt += (n % 2);
        if (cnt % 2)
            cout << "An\n";
        else
            cout << "Chi\n";
    }
}

