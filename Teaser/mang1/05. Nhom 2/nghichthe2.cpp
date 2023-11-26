#include<bits/stdc++.h>
using namespace std;
int n,p[101],a[101],vt,mx;
/**********************/
void xuli(int vt)
{
    a[vt]=mx;
    for(int i=vt;i<=n;i++) p[i]--;
    mx--;
}
/**********************************/
int main()
{
    freopen("nghichthe2.inp","r",stdin);
    freopen("nghichthe2.out","w",stdout);
    cin>>n;
    mx=n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        if(p[i]==0) vt=i;
    }
    xuli(vt);
    while(mx>0)
    {
        vt=n;
        while (p[vt]!=0) vt--;
        xuli(vt);
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
}
