#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if ((x!= 0 && y != 0) || (x == 0 && y == 0))
        {
            cout << "-1\n";
            continue;
        }
        if (x == 0) swap (x, y);
        if ((n-1)%x != 0) cout << "-1\n";
        else
        {
            for (int i = 2; i <= n; i+=x)
            {
                for (int j = 1; j <= x; j++)
                    cout << i << " ";
            }cout << "\n";
        }
    }
    return 0;
}
