#include <bits/stdc++.h>
#define ll long long
#define N 10E18
using namespace std;
int n;
ll a[100001],k,t_am,t_duong=N;

int main()
{
    freopen("ants.inp","r",stdin);
    freopen("ants.out","w",stdout);
    cin>> n >> k;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i]<0) t_am = min(t_am,a[i]);
        else if (a[i]>0) t_duong = min(t_duong,a[i]);
    }
    cout << max(abs(t_am), k-t_duong);
}
