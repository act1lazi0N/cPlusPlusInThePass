#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100001];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int cnt = 0;
    ll s=1;
    for (int i = n; i > 1; i--)
    {
        if (a[i] == a[i-1])
        {
            cnt++;
            s *= a[i];
            if (cnt == 2) break;
            i--;
        }
    }
    if (cnt == 2)
        cout << s;
    else
        cout << -1;
}
