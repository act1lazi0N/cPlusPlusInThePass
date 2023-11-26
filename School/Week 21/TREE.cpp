#include<bits/stdc++.h>
using namespace std;
int a[1005], x[1005];
int n, k, d = 0;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    x[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        x[i] = x[i-1] + k;
        if (x[i] != a[i])
        {
            d++;
        }
    }
    cout << d << "\n";
    for (int i = 2; i <= n; i++)
    {
        if (x[i] != a[i])
        {
            if (x[i] > a[i])
            {
                cout << "+";
            }
            else
            {
                cout << "-";
            }
            cout << " " << i << " " << abs(x[i] - a[i]) << "\n";
        }
    }
    return 0;
}
