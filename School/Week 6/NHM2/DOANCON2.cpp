#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], dem = 1, pmax = -1e9+1;
int main()
{
    cin >> n;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] * a[i-1] < 0)
        {
            dem++;

        }
        else
        {
            pmax = max(dem, pmax);
            dem = 1;
        }
    }
    cout << max(dem, pmax);
    return 0;
}
