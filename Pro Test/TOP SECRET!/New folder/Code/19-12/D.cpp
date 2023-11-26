#include<bits/stdc++.h>
using namespace std;

string a,b;
int i,t=0,n,ok=0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>a>>b;
    a=a+' ';
    b=b+' ';

    for(i=0;i<=n;i++)
    {
        if(a[i]!=b[i]&&ok==0)
        {
            t++;
            ok=1;
        }
        if(a[i]==b[i])
            ok=0;
    }

    cout<<t;
}
