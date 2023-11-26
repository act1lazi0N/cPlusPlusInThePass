#include<bits/stdc++.h>
using namespace std;
long long a,b,x,t=0;
int main()
{
    cin>>a>>b;
    for(;a%b!=0;)
    {
        x=a%b;
        t+=(a/b);
        a=b;
        b=x;
    }
    t+=(a/b);
    cout<<t;
}
