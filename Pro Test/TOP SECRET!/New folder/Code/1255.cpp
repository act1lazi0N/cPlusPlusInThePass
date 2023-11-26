#include<bits/stdc++.h>
using namespace std;
int t,n,k,fs[47];
void ham1(int n)
{
    if(fs[n-1]==0) ham1(n-1);
    if(fs[n-2]==0) ham1(n-2);
    fs[n]=fs[n-2]+fs[n-1];
}
char ham(int n,int k)
{
    char kq;
    if(n==0) return kq='a';
    if(n==1) return kq='b';
    if(k<=fs[n-2])
    {
        kq=ham(n-2,k);
    }
    else
    {
        k-=fs[n-2];
        kq=ham(n-1,k);
    }
    return kq;
}
int main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>t;
    fs[0]=1;
    fs[1]=1;
    while(t--)
    {
        cin>>n>>k;
        if(n>1) ham1(n);
        cout<<ham(n,k)<<'\n';
    }
}
