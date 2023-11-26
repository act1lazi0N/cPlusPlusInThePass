#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int dem = 0, pmax = 0;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int t = j + 1; t < n; t++)
            {
                if (a[i] + a[j] > a[t] && a[i] + a[t] > a[j] && a[j] + a[t] > a[i])
                {
                dem++;
                pmax = max(a[i] + a[j] + a[t], pmax);
                }
            }
        }
    }
    cout << dem << " " << pmax;
}
