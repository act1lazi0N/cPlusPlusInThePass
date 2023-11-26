#include<bits/stdc++.h>
using namespace std;

pair<int,int> a[5],b[5];
int kq=0,i,t=0;

int main()
{
    freopen("DOAN.INP","r",stdin);
    freopen("DOAN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(i=0;i<3;i++)
        cin>>a[i].first>>a[i].second;

    sort(a,a+3);

    b[t].first=a[0].first;
    b[t].second=a[0].second;
    for(i=1;i<3;i++)
    {
        if(b[t].second>=a[i].first)
            b[t].second=max(a[i].second,b[t].second);
        else
        {
            t++;
            b[t].first=a[i].first;
            b[t].second=a[i].second;
        }
    }

    for(i=0;i<=kq;i++)
        kq=max(kq,b[i].second-b[i].first);

    cout<<kq;
}
