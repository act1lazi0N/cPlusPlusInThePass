#include <bits/stdc++.h>

using namespace std;
int n, d=0;
long a[1001];
bool ktra(long x)
{
    bool kt = true;
    while (x>9)
    {
       if ((x%100)/10>x%10)
        {
           kt = false;
           break;
        }
        x=x/10;
    }
    return kt;
}
int main()
{
    freopen("STEP.INP","r",stdin);
    freopen("STEP.OUT","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        if (ktra(a[i])) d++;
    }
    cout << d;
    return 0;
}
