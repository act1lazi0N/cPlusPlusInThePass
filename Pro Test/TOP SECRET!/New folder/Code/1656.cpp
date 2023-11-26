#include<bits/stdc++.h>
using namespace std;
int main()

{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,k,b,m,x;
     cin>>a>>k>>b>>m>>x;
    long long l=1,r=x/(a+b)*2;
    while(l<r)
    {
        long long p=(l+r)/2;
        long long t1=a*(k-1)*(p/k) +a*(p%k);
        long long t2=b*(m-1)*(p/m) +b*(p%m);
        if(t1+t2>=x) r=p;
        else l=p+1;
    }
    cout<<l;
}
