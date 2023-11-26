#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("FLOWERS.INP","r",stdin);
    freopen("FLOWERS.OUT","w",stdout);
    int n;scanf("%d",&n);int test=0,kq=0;vector<int> b;
    int a[n],t=1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i+1]!=a[i]) {b.push_back(t);t=1;}
        else t++;
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]<=2) test+=b[i];
        else
        {
            test+=2;
            if(test>kq) kq=test;
            test=2;
        }
    }
    if(test>kq) kq=test;
    printf("%d",kq);
}
