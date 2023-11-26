#include<bits/stdc++.h>
using namespace std;
int a,b,t=0,x,x1;
int ham(int a)
{
    int s=0;
    for(;a!=0;)
    {
        s+=a%10;
        a/=10;
    }
    return s;
}
int main()
{
    cin>>a>>b;
    x=max(a,b);
    for(int i=1;i*i<=x;i++)
    {
        if(a%i==0&&b%i==0)
        {
            x1=ham(i);
            if(x1>t)
                t=x1;
        }
        int j=a/i;
        if(a%j==0&&b%j==0)
        {
            x1=ham(j);
            if(x1>t)
                t=x1;
        }
        j=b/i;
        if(a%j==0&&b%j==0)
        {
            x1=ham(j);
            if(x1>t)
                t=x1;
        }
    }
    cout<<t;
}
