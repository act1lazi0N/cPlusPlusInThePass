#include<bits/stdc++.h>
using namespace std;
long n,m,k,t,d,a,thia[1000000],dua[1000000];
/*******************************************/
bool ktra(long t, long d, long a)
{
    if(a==1)
    {
        thia[t]--;
        dua[t]--;
    }
    else thia[t]--;
/**/
    if((thia[t]<0)||(dua[t]<0))
    {
        if(a==1)
        {
            thia[t]++;
            dua[t]++;;
        }
        else thia[t]++;
        return false;
    }
/**/
    for(long i=t+1;i<=t+d-1;i++)
    {
        if(a==1)
        {
            thia[i]--;
            dua[i]--;
        }
        else thia[i]--;
    }
    return true;
}
/*********************************************/
int main()
{
    freopen("gruel.inp","r",stdin);
    freopen("gruel.out","w",stdout);
/**/
    cin>>n>>m>>k;
    long x=1000000;
    fill(thia,thia+x,n);
    fill(dua,dua+x,m);
/**/
    for(long i=1;i<=k;i++)
    {
        cin>>t>>d>>a;
        if(ktra(t,d,a)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
