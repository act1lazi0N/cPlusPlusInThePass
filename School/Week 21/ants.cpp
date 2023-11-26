#include<bits/stdc++.h>
#define N 10E18;
using namespace std;
int n;
long long a[100001], k, m, d = N;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < 0) m = min(m, a[i]);
        else if (a[i] > 0)
        {
            d = min(d, a[i]);
        }
    }
    cout << max(abs(m), k - d);
}
