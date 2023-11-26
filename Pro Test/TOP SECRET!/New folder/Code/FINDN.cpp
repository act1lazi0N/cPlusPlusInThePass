#include<bits/stdc++.h>
using namespace std;
long long n,t=1,x;
float x1;
long long ham(long long t,long long j)
{
    for(long long i=t+1;; i++)
        if(i%j==0) return i;
}
int main()
{
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    x1=(float)sqrt(2*n-0.25)-0.5;
    if(x1!=(long long)x1) x1=(long long)x1+1;
    x=(long long) x1;
    for(long long i=2; i<x; i++)
    {
        t=ham(t,i);
        t+=(i*(i-1));
    }
    t=ham(t,x);
    n-=((x*(x-1))/2);
    t+=((n-1)*x);
    cout<<t;
}
