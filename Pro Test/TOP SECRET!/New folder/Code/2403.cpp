#include<bits/stdc++.h>
using namespace std;
string s;
long long n,kq=0,t,i;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        t=s[i]-'0';
        if(t%2==0)
            kq+=(i+1);
    }
    cout<<kq;
}
