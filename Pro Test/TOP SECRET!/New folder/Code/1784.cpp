#include<bits/stdc++.h>
using namespace std;
int t,n,minn[4],maxx[4],kq[4];
int main()
{
    cin>>n;
    for(int i=0; i<3; i++)
    {
        cin>>minn[i]>>maxx[i];
        n-=minn[i];
        kq[i]=minn[i];
    }
    for(int i=0;n!=0;i++)
    {
        t=min(n,maxx[i]-minn[i]);
        kq[i]+=t;
        n-=t;
    }
    cout<<kq[0]<<" "<<kq[1]<<" "<<kq[2];
}
