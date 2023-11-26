#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HOUSE.INP","r",stdin);
    freopen("HOUSE.OUT","w",stdout);
    int n,kq=0,t=1;scanf("%d",&n);char a[n];vector<int> b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]) {b.push_back(t);t=1;}
        else t++;
    }
    for(int i=0;i<b.size();i++)
        kq+=(b[i]/2);
    printf("%d",kq);
}
