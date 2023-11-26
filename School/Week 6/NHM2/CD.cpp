#include<bits/stdc++.h>
using namespace std;

const int N = 100;

int a[N];
int main()
{
    int n, s;

    int dem = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort (a, a + n);
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            ans += a[i];

        }
        if (ans <= s)
        {
            dem++;
        }
        else
        {
            break;
        }
    }

    cout << dem;
}
