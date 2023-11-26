#include<bits/stdc++.h>
using namespace std;

const int N = 100;

int a[N];
int main()
{
    int n, s;

    int dem = 1;
    cin >> n >> s;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= s)
        {
            s += a[i];
            dem++;

        }
    }

    cout << dem;
}
