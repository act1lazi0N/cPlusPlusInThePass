#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,kq=0,t2=0,t3=0;cin>>n;x=n;
        for(;n%6==0;)
        {
            kq++;
            n/=6;
        }
        for(;n%2==0;)
        {
            t2++;
            n/=2;
        }
        for(;n%3==0;)
        {
            t3++;
            n/=3;
        }
        if(n!=1||t2>t3) cout<<-1<<'\n';
        else cout<<kq+t3-t2+t3<<'\n';
    }
}
