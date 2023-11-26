#include<bits/stdc++.h>
using namespace std;
int n,a[100002],s[100002];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==s[i-1]-s[0]+s[n]-s[i])
        {
            cout<<i;
            return 0;
        }
    }
}
