#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,k,kq=-1,t,r;
int main()
{
    cin>>a>>b>>c>>d>>k;
    t=(b+d)/k;
    t=t*k;
    if(t>=a+c)
    {
        r=t-(a+c);
        if(a+r>b)
        {
            cout<<b<<" "<<c+a+r-b;
        }
        else
        {
            cout<<a+r<<" "<<c;
        }
    }
    else
        cout<<-1;
}
