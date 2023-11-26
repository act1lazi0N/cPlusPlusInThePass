#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("nhap.inp","r",stdin);
    //freopen("nhap.out","w",stdout);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int  k,x[4],a;
        cin>>a>>k>>x[1]>>x[2]>>x[3];
        double dtich;
        sort(x+1,x+4);
        if(x[3]-x[1]>=a+2*k)  dtich=0;
        else
            if(x[3]-x[1]<=2*k) dtich=1.0*a*a;
            else dtich=1.0*a*(x[1]+a+2*k-x[3]);
        cout<<fixed<<setprecision(2)<<dtich<<'\n';
    }
    return 0;
}
