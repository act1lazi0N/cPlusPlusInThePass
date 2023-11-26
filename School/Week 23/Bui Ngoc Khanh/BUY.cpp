#include<bits/stdc++.h>
using namespace std;
int kq0[10000];
int main()
{
    freopen("BUY.INP","r",stdin);
    freopen("BUY.OUT","w",stdout);
    int m,n;cin>>m>>n;pair<int,int> b[n];int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i].first;
        b[i].second=i;
    }
    long long int kq=0;
    sort(b,b+n);
    for(int i=0;i<n&&m>0;i++)
    {
        if(m>a[b[i].second])
        {
            kq+=(a[b[i].second]*b[i].first);
            m-=a[b[i].second];
            kq0[b[i].second]=a[b[i].second];
        }
        else
        {
            kq+=(m*b[i].first);
            kq0[b[i].second]=m;
            m=0;
        }
    }
    cout<<kq<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<kq0[i]<<endl;
    }
}
