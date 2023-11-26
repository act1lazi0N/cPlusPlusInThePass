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
        long long m, n;
        cin >> m >> n;
        if ((m % 2 == 0 && n % 2 == 0) || (m % 2 != 0 && n % 2 != 0))
        {
            cout << "Chi\n";
            continue;
        }
        else
        {
            cout << "An\n";
            continue;
        }
    }
}
