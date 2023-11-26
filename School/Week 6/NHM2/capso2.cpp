#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] == x)
        {
            dem++;
        }

    }
    cout << dem;
}
