#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    int maxp = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int t = j + 1; t < n; t++)
            {
                if (a[i] + a[j] > a[t] && a[i] + a[t] > a[j] && a[j] + a[t] > a[i])
                {
                    dem++;
                    maxp = max(a[i] + a[j] + a[t], maxp);
                }
            }
        }
    }
    cout << dem << " " << maxp;
    return 0;
}
