#include <bits/stdc++.h>

using namespace std;
int m,n,k,t,d,a;
int thia[1005],dua[1005];
int main()
{
    freopen("GRUEL.INP","r",stdin);
    freopen("GRUEL.OUT","w",stdout);
    cin >>n>>m>>k;
    thia[0]=n; dua[0]=m;
    for (int i=1;i<=k;i++)
    {
        cin >>t>>d>>a;
        int ok=0;
        thia[i]=thia[i-1]-1;
        if (thia[i]<0) ok++;
        thia[d]=thia[d-1]+1;
        if (a==1)
        {
                dua[i]=dua[i-1]-1;
                dua[d]=dua[d-1]+1;
                if (dua[i]<0) ok++;
        }
        if (ok==0) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}
