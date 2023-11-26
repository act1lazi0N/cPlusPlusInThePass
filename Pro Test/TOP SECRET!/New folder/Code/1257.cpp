#include<bits/stdc++.h>
using namespace std;
long long fs[46],fa[46];
void ham(int n)
{
    if(fs[n-2]==0) ham(n-2);
    if(fs[n-1]==0) ham(n-1);
    fs[n]=fs[n-2]+fs[n-1];
    fa[n]=fa[n-2]+fa[n-1];
}
int ham1(int n,int k)
{
    int kq=0;
    if(n==0) return 1;
    if(n==1) return 0;
    if(fs[n-1]==0) ham(n-1);
    if(k<=fs[n-2])
    {
        kq+=ham1((n-2),k);
    }
    else
    {
        k-=fs[n-2];
        kq+=fa[n-2];
        kq+=ham1(n-1,k);
    }
    return kq;
}
int main()
{
    //freopen("1257.inp","r",stdin);
    //freopen("1257.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    scanf("%d",&t);
    fs[0]=1;
    fa[0]=1;
    fs[1]=1;
    fa[1]=0;
    for(int i=0; i<t; i++)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        printf("%d\n",ham1(n,k));
    }
}
