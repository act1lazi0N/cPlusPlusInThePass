#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.INP", "r",stdin);
    freopen("out.OUT", "w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int i,f;
        cin >> i >> f;
        if ((i <= 1 and f <= 2) or (i <= 2 and f <= 1))
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}
