#include <bits/stdc++.h>
#define N 100005
using namespace std;
int n,a[N],b[N],c[N];
long long S=0;
int main()
{
    freopen("THREENUM.INP","r",stdin);
    freopen("THREENUM.OUT","w",stdout);
    cin >>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    b[1]=a[1];
    for (int i=2;i<=n;i++)
    {
        if (a[i]>b[i-1]) b[i]=a[i];
        else b[i]=b[i-1];
    }
    c[n]=a[n];
    for (int i=n-1;i>=1;i--)
     {
         if (a[i]>c[i+1]) c[i]=a[i];
         else c[i]=c[i+1];
     }
    for (int i=2;i<n;i++)
        if (2*b[i-1]-3*a[i]+5*c[i+1]>S) S=2*b[i-1]-3*a[i]+5*c[i+1];
    cout << S;
    return 0;
}
