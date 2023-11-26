#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("DTREE.INP","r",stdin);
    //freopen("DTREE.OUT","w",stdout);
    int t;cin>>t;vector<long long int> kq;
    for(int i=0;i<t;i++)
    {
        int n;cin>>n;pair<int,int> a[n];
        vector<long long int> kq1,kq2;
        for(int i=0;i<n;i++)
        {
            int x,r;cin>>x>>r;
            a[i].first=x-r;a[i].second=x+r;
        }
        sort(a,a+n);
        kq1.push_back(a[0].first);
        kq2.push_back(a[0].second);
        int u,v,m=0;
        for(int i=1;i<n;i++)
        {
            if(a[i].first<=kq2[m])
            {
                u=kq1[m];
                if(kq2[m]>a[i].second) v=kq2[m];
                else v=a[i].second;
                kq1.erase(kq1.begin()+m);kq2.erase(kq2.begin()+m);
                kq1.push_back(u);
                kq2.push_back(v);
            }
            else
            {
                kq1.push_back(a[i].first);
                kq2.push_back(a[i].second);
                m++;
            }
        }
        long long int kq0=0;
        for(int i=0;i<kq1.size();i++)
        {
            kq0+=(kq2[i]-kq1[i]);
        }
        kq.push_back(kq0);
    }
    for(int i=0;i<kq.size();i++)
        cout<<kq[i]<<endl;
}
