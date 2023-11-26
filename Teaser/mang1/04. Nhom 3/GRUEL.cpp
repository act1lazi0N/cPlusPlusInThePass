#include <bits/stdc++.h>

using namespace std;

long long n,m,k,a,b[100000],c[100000],d,t,o,p,x,s;

int main()
{
    freopen("GRUEL.inp","r",stdin);
    freopen("GRUEL.out","w",stdout);

    cin>>n>>m>>k;s=0;
    for (int i=1;i<=k;i++)
    {
        cin>>t>>d>>a;
        x=0;
        if(a==0 &&n!=0)
            {
                cout<<"Yes"<<'\n';
                n--; p++;
                b[p]=d+1;
                x=1;
            }
        else if (a==1 && n!=0 && m!=0)
            {
                cout<<"Yes"<<'\n';
                n--; p++;
                b[p]=d+1;
                m--; o++;
                c[o]=d+1;
                x=1;
            }
        for (int j=1;j<=p;j++)
            {
                b[j]=b[j]-(t-s);
                if (b[j]==0) n++;
            }
        for (int j=1;j<=o;j++)
            {
                c[j]=c[j]-(t-s);
                if (c[j]==0) m++;
            }
        if(a==0 &&n!=0&& x!=1)
            {
                cout<<"Yes"<<'\n';
                n--;p++;b[p]=d+1;
            }
        else if (a==1 && n!=0 && m!=0&& x!=1)
            {
                cout<<"Yes"<<'\n';
                n--;p++;b[p]=d+1;
                m--;o++;c[o]=d+1;
            }
        else if (a==0 && n==0 && x!=1) cout<<"No"<<'\n';
         else if (a==1 && n==0 || m==0 &&x!=1) cout<<"No"<<'\n';
         s=t;
    }
}
