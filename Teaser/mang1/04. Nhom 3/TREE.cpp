#include <bits/stdc++.h>

using namespace std;

int n,k,a[1001], s[1001];

int main()
{
    freopen("TREE.inp","r",stdin);
    freopen("TREE.out","w",stdout);
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        for (int j=i-1;j>=1;j--)
            if (a[j]!=a[i]-(i-j)*k) s[i]++;
        for (int j=i+1;j<=n;j++)
            if (a[j]!=a[i]+(j-i)*k) s[i]++;
    }
    int somin=1000001;
    int cso = 0;
    for (int i=1;i<=n;i++)
        if (somin > s[i])
        {
            somin = s[i];
            cso=i;
        }
    cout << somin <<'\n';
    for (int j=1; j<=cso-1;j++)
    {
        int x = a[cso]-(cso-j)*k;
        if (a[j]<x)
            cout << '+' <<" "<<j<<" " << x - a[j]<<'\n';
        else if (a[j]>x)
            cout << '-' <<" "<<j<<" " << a[j]-x <<'\n';
    }

    for (int j=cso+1; j<=n;j++)
    {
        int y = a[cso]+(j-cso)*k;
        if (a[j]<y)
            cout << '+' <<" "<<j<<" " << y - a[j]<<'\n';
        else if (a[j]>y)
            cout << '-' <<" "<<j<<" " << a[j] - y <<'\n';
    }

    return 0;
}
