#include<bits/stdc++.h>
using namespace std;
int s_pic[1001],e_pic[1001];
int main()
{
    freopen("COWPHOTO.INP","r",stdin);
    freopen("COWPHOTO.OUT","w",stdout);
    int n,k;cin>>n>>k;pair<int,int> a[k];
    for(int i=0;i<k;i++)
    {
        int t;
        cin>>t;a[i].second=t;
        cin>>t;a[i].first=t;
        if(a[i].first<a[i].second) swap(a[i].first,a[i].second);
    }
    sort(a,a+k);
    int kq=1;
    s_pic[1]=1;e_pic[1]=n;
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<=kq;j++)
        {
            if(a[i].second>=s_pic[j]&&a[i].first<=e_pic[j])
            {
                s_pic[j+1]=a[i].first;
                e_pic[j+1]=e_pic[j];
                e_pic[j]=a[i].first-1;
                kq++;break;
            }
        }
    }
    cout<<kq;
}
