#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("thamquan.INP","r",stdin);
    freopen("thamquan.OUT","w",stdout);
    long long int kq=0;
    int n,m;scanf("%d%d",&n,&m);int a[n],b[m];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    sort(a,a+n,greater<int>());
    sort(b,b+m);
    for(int i=0;i<n;i++) kq+=(a[i]*b[i]);
    printf("%lli",kq);
}
