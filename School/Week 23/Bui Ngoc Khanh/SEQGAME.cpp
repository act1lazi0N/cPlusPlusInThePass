#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SEQGAME.INP","r",stdin);
    freopen("SEQGAME.OUT","w",stdout);
    int n;scanf("%d",&n);int a[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    sort(a,a+n);sort(c,c+n);
    int x=0,y=n-1,t,kq;
    kq=abs(a[x]+c[y]);
    for(;x<n&&y>=0;)
    {
        t=a[x]+c[y];
        kq=min(kq,abs(t));
        if(kq==0) break;
        if(t<0) x++;
        if(t>0) y--;
    }
    printf("%d",kq);
}
