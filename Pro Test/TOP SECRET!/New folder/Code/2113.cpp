#include<bits/stdc++.h>
using namespace std;
long long t,a,b,k,k1;
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            k/=2;
            cout<<(a-b)*k<<'\n';
        }
        else
        {
            k/=2;
            cout<<a*(k+1)-b*k<<'\n';
        }
    }
}
