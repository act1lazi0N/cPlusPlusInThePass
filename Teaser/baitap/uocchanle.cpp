#include <bits/stdc++.h>
using namespace std;
int dem_uoc(int a)
{
    int dem = 0;
    for (int i = 1; i <= a; i ++)
    {
        if (a % i ==0)
            dem ++;
    }
    return dem;
}
void solve (int a)
{
    if (dem_uoc(a) % 2 == 0)
        cout << "CHAN" << endl;
    else
        cout << "LE" << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i ++)
        cin >> a [i];
    for (int i = 0; i < n; i ++)
        solve(a [i]);
}
