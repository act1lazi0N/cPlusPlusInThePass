#include<bits/stdc++.h>
using namespace std;
long n,x,dem=0,a;
/*********************************/
int tongcs(long x)
{
    int tong=0;
    while(x!=0)
    {
        tong=tong+x%10;
        x/=10;
    }
    return tong;
}
int main()
{
    freopen("bhhao.inp","r",stdin);
    freopen("bhhao.out","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        x=tongcs(a);
        if((x==6)||(x==28)) dem++;
    }
    cout<<dem;
    return 0;
}
