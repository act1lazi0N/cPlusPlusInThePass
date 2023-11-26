#include<bits/stdc++.h>
using namespace std;
int n,a[2010],b[2010],kq1=0,kq2=0,t=1,kq;
int min1(int a,int b)
{
    if(a<b) return a;
    else return b;
}
void swap1(int& a,int& b)
{
    int r=a;
    a=b;
    b=r;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>a[0];
    b[0]=a[0];
    for(int i=1;i<2*n;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1]) t=0;
        b[i]=a[i];
    }
    if(t==1) {cout<<0;return 0;}
    for(;kq1<=2*n+1;)
    {
        kq1++;
        if(kq1%2==0)
        {
            for(int i=0;i<2*n;i+=2)
                swap1(a[i],a[i+1]);
        }
        else
        {
            for(int i=0;i<n;i++)
                swap1(a[i],a[i+n]);
        }
        t=1;
        for(int i=1;i<2*n;i++)
        {
            if(a[i]<a[i-1])
            {
                t=0;
                break;
            }
        }
        if(t==1) break;
    }
    for(;kq2<=2*n+1;)
    {
        kq2++;
        if(kq2%2==1)
        {
            for(int i=0;i<2*n;i+=2)
                swap1(b[i],b[i+1]);
        }
        else
        {
            for(int i=0;i<n;i++)
                swap1(b[i],b[i+n]);
        }
        t=1;
        for(int i=1;i<2*n;i++)
        {
            if(b[i]<b[i-1])
            {
                t=0;
                break;
            }
        }
        if(t==1) break;
    }
    kq=min1(kq1,kq2);
    if(kq<2*n+1) cout<<kq;
    else cout<<-1;
}
