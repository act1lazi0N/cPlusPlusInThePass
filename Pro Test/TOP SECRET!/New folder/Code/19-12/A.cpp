#include<bits/stdc++.h>
using namespace std;

int t;
long long a,b,c,x;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        x=abs(c+a-2*b);
        if(x%2==1) x++;
        cout<<x/2<<'\n';
    }
}
