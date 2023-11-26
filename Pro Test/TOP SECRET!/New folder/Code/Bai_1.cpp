#include<bits/stdc++.h>
using namespace std;
int x=1,a,s=1;
int main()
{
    freopen("TIMSO.IN","r",stdin);
    freopen("TIMSO.OUT","w",stdout);
    cin>>a;
    for(; s<a;)
    {
        x++;
        s+=(x*x);
    }
    cout<<x;
}
