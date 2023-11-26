#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("NUMCON.INP","r",stdin);
    freopen("NUMCON.OUT","w",stdout);
    string s,a[201];int n=0;
    while(getline(cin,s))
    {
        n++;
        a[n]=s;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]<a[j]+a[i]) swap(a[i],a[j]);
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i];
}
