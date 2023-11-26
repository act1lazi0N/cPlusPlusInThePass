#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        //freopen("1251.inp","r",stdin);
        //freopen("1251.out","w",stdout);
        int m,n;
        long long k[102],x[102],y[102];
        vector<int> ans;
        cin>>m>>n;
        for(int i=1;i<=m;i++)
            cin>>k[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cin>>x[j];
            for(int j=1;j<=m;j++)
                y[j]=k[j];
            bool ok=true;
            for(int j=1;j<=m;j++)
            {
                for(int l=1;l<=m;l++)
                {
                    long long gcd=__gcd(x[j],y[l]);
                    x[j]/=gcd;
                    y[l]/=gcd;
                }
                if(x[j]!=1)
                {
                    ok=false;
                    break;
                }
            }
            if(ok) ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        if(ans.size()==0)return 0;
        for(int i=0;i<ans.size()-1;i++)
            cout<<ans[i]<<" ";
        cout<<ans[ans.size()-1];
    }
