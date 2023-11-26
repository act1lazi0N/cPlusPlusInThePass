#include<bits/stdc++.h>
using namespace std;
double c,x,kq;
int main()
{
    cin>>c;
    double l=0.000000,r=c*1.000000,m;
    for(;l<r;)
    {
        m=(l+r)/2.0;
        if(m*m+sqrt(m)>c)
            r=m;
        else
            l=m+0.00000001;
        if(l*l+sqrt(l)>c) break;
    }
    cout<<setprecision(6)<<fixed<<l-0.00000001;
}
