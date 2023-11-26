#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("INSUL.INP","r",stdin);
    freopen("INSUL.OUT","w",stdout);
    int n;scanf("%d",&n);int a[n];long long int kq=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        kq+=a[i];
    }
    sort(a,a+n);
    int x=0,y=n-1;
    for(;x!=y&&x-1!=y;)
    {
        kq+=(a[y]-a[x]);
        x++;y--;
    }
    cout<<kq;
}
