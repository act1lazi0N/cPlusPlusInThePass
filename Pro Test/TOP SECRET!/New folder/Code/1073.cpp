#include<bits/stdc++.h>
using namespace std;
int n;
long long k,kq=0,x;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0) kq=max(kq,0-x);
        else kq=max(kq,k-x);
    }
    cout<<kq;
}
