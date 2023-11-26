#include <bits/stdc++.h>
#define N 105
using namespace std;
int n,a[N],b[N],c[N];
long long S=0;
int main()
{
    freopen("NGHICHTHE1.INP","r",stdin);
    freopen("NGHICHTHE1.OUT","w",stdout);
    cin >>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    b[1]=0;
    for (int i=2;i<=n;i++)
    {
        int d=0;
        for (int j=1;j<i;j++)
            if (a[j]>a[i]) d++;
        b[i]=d;
    }
    for (int i=1;i<=n;i++) cout <<b[i]<<" ";
    return 0;
}
