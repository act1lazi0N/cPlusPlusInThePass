#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DELARR.INP","r",stdin);
    freopen("DELARR.OUT","w",stdout);
    int n,kq=0;scanf("%d",&n);int a[n],sa=0,sd=0;long long int t=0,m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0) sa++;
        if(a[i]>0) sd++;
        t+=a[i];
    }
    if(sd==0) {printf("%d",sa);return 0;}
    if(sa==0) {printf("%d",sd);return 0;}
    if(t==0) {printf("0");return 0;}
    sort(a,a+n);
    m=0-t;
    int x=0,y=n-1;
    for(;m!=0;)
    {
        if(m<0) {m+=a[y];y--;kq++;}
        if(m>0) {m+=a[x];x++;kq++;}
    }
    printf("%d",kq);
}
