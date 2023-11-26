#include<bits/stdc++.h>
using namespace std;
long long l,r;
long long ham(long long x)
{
    if(x==0) return 0;
    long long kq=0,t=0,t1=1,t2=1,n=x;
    for(;x>=10;)
    {
        t++;
        x/=10;
        t1*=10;
        t2+=t1;
    }
    kq+=(9*t);
    kq+=(n/t2);
    return kq;
}
int main()
{
    cin>>l>>r;
    cout<<ham(r)-ham(l-1);
}
