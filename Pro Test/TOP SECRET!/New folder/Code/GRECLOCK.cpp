#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t;cin>>n;
    t=n/2;
    if(n%2==1)
    {
        cout<<7;
        for(int i=0;i<t-1;i++)
            cout<<1;
    }
    else
    {
        for(int i=0;i<t;i++)
            cout<<1;
    }
}
