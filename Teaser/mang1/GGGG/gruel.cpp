#include <bits/stdc++.h>
#define N 1001
using namespace std;
struct khach
{
    int t, s, p;
};
khach a[N];
int Free[N];
int n,m,k;
int main()
{
    freopen("gruel.inp","r",stdin);
    freopen("gruel.out","w",stdout);
    cin >> n >> m >> k;
    for (int i=1; i<=k; i++)
    {
        cin >> a[i].t >> a[i].s >> a[i].p;
        a[i].s = a[i].s + a[i].t;
    }
    cout << "YES" << '\n';
    n--;
    if (a[1].p == 1) m--;
    for (int i = 2; i <= k; i++)
    {
        for (int j=1; j<i; j++)
        if (Free[j] == 0 && a[i].t >= a[j].s)
        {
            Free[j] = 1;
            n++;
            if (a[j].p == 1) m++;
        }
        if (a[i].p == 0)
        {
            if (n > 0)
            {
                cout << "YES" << '\n';
                n--;
            }
            else
            {
                cout << "NO" << '\n';
                Free[i] = 1;
            }
        }
        if (a[i].p == 1)
        {
            if (n > 0 && m > 0)
            {
                cout << "YES" << '\n';
                n--; m--;
            }
            else
            {
                cout << "NO" << '\n';
                Free[i] = 1;
            }
        }
    }
    return 0;
}
