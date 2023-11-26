#include<bits/stdc++.h>
using namespace std;
long n,x,i,mn,luui;
int main()
{
    freopen("bkid.inp","r",stdin);
    freopen("bkid.out","w",stdout);
    cin>>n;
    cin>>x>>mn;
    if(x<mn)
    {
        cout<<'2'<<endl;
        luui=1;
        mn=x;
    }
    else
    {
        cout<<'1'<<endl;
        luui=2;
    }
    for(long i=3;i<=n;i++)
    {
        cin>>x;
        if(x>mn) cout<<i<<endl;
        else
        {
            cout<<luui<<endl;
            luui=i;
            mn=x;
        }
    }
    return 0;
}
