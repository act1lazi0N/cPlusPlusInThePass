#include<bits/stdc++.h>
using namespace std;
int snt[1020],i,x=2,j,n,a,kqua[1000001];
bool ktra[1020],kq[1020];
void sang_ngto()
{
    ktra[0]=ktra[1]=kq[0]=kq[1]=kq[2]=kq[3]=0;
    ktra[2]=1;
    ktra[3]=1;
    for(i=4;i<=1009;i++)
    {
        kq[i]=0;
        if(i%2!=0&&i%3!=0)
            ktra[i]=1;
        else
            ktra[i]=0;
    }
    snt[0]=2;
    snt[1]=3;
    for(i=4;i<=1009;i++)
    {
        if(ktra[i]==1)
        {
            snt[x]=i;
            for(j=i+i;j<=1009;j+=i)
                ktra[j]=0;
            if(snt[x-1]*2>snt[x]+snt[x-2])
                {kq[snt[x-1]]=1;}
            x++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang_ngto();
    cin>>n;
    x=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(kq[a]==1)
        {
            kqua[x]=a;
            x++;
        }
    }
    if(x>0) cout<<kqua[0];
    for(i=1;i<x;i++)
        cout<<" "<<kqua[i];
}
