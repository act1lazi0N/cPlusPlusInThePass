#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ans = a[i] + a[j];
            if (ans % 2 != 0)
            {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}
