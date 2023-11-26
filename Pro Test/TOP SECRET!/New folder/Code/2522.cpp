#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int a, k;
        cin>>a>>k;
        int x[3];
        for(int i=0;i<3;i++) cin>>x[i];
        sort(x,x+3);
        long double kq=0;
        if(2*k>=x[2]-x[0]) kq=(long double) a*a;
        else
        {
            int l=max(2*x[0]+2*k-a,2*x[2]-2*k-a);
            int r=min(2*x[0]+2*k+a,2*x[2]-2*k+a);
            if(l <= r) kq=(long double)(((r - l)/2.00)*a);
        }
        cout<<fixed<<setprecision(2)<<kq<<'\n';
    }
}
