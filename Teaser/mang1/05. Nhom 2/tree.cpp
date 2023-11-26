#include<bits/stdc++.h>
using namespace std;
long n,k,a[1001],dem,mn=1000,so,luui,d;

/******************************/
int ktra(long i)
{
    dem=0;
    so=a[i];
    for(long j=i-1;j>0;j--)
    {
        so=so-k;
        if(so<0) return 0;
        if(a[j]!=so)   dem++;
    }
/**/
    so=a[i];
    for(long j=i+1;j<=n;j++)
    {
        so=so+k;
        if(a[j]!=so) dem++;
    }
/**/
    if(mn>dem)
    {
        mn=dem;
        luui=i;
    }
    return 0;
}
/*********************************************/
int main()
{
    freopen("tree.inp","r",stdin);
    freopen("tree.out","w",stdout);
/**/
    cin>>n>>k;
    for(long i=1;i<=n;i++) cin>>a[i];
    mn=n;
    for(long i=1;i<=n;i++) ktra(i);
/**/
    cout<<mn<<endl;
/**/
    so=a[luui];
    for(int j=luui-1;j>0;j--)
    {
        so-=k;
        d=so-a[j];
        if(d>0) cout<<"+ "<<j<<' '<<d<<endl;
        if(d<0) cout<<"- "<<j<<' '<<-d<<endl;
    }
/**/
    so=a[luui];
    for(int j=luui+1;j<=n;j++)
    {
        so+=k;
        d=so-a[j];
        if(d>0) cout<<"+ "<<j<<' '<<d<<endl;
        if(d<0) cout<<"- "<<j<<' '<<-d<<endl;
    }
    return 0;
}
