#include<bits/stdc++.h>
using namespace std;
long n,x,dem;
/**********************************/
bool ktra(long x)
{
    int x1,x2;
    if(x<=9) return false;
    x1=x%10;
    x=x/10;
    while(x!=0)
    {
        x2=x%10;
        x=x/10;
        if(x1<x2) return false;
        x1=x2;
    }
    return true;
}
/******************************/
int main()
{
    freopen("step.inp","r",stdin);
    freopen("step.out","w",stdout);
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        cin>>x;
        if(ktra(x)==1) dem++;
    }
    cout<<dem;
}
