#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("1228.inp","r",stdin);
    //freopen("1228.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,a[100001];;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]-=k;
    }
    long long t=0;
    int do_dai=0,vi_tri;
    map<long long,int> sum;
    sum[0]=0;
    for(int i=1; i<=n; i++)
    {
        t+=a[i];
        if(sum.find(t)==sum.end())
            sum[t]=i;
        else
        {
            int l=i-sum[t];
            if(l>do_dai)
            {
                do_dai=l;
                vi_tri=i-l+1;
            }
        }
    }
    cout<<do_dai;
    if(do_dai!=0) cout<<" "<<vi_tri;
}
