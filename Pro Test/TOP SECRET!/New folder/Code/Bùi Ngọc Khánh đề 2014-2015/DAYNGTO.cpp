#include<bits/stdc++.h>
using namespace std;

int n,i,dem=0,vt=0;
long long a,j,snt=0;

bool ktra(long long x)
{
    if(x==1) return 0;
    if(x<=3) return 1;
    if(x%2==0||x%3==0) return 0;

    j=5;
    while(j*j<=x)
    {
        if(x%j==0||x%(j+2)==0)
            return 0;
        j+=6;
    }
    return 1;
}

int main()
{
    freopen("DAYNGTO.IN","r",stdin);
    freopen("DAYNGTO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(ktra(a)==1)
        {
            dem++;
            if(a>snt)
            {
                snt=a;
                vt=i;
            }
        }
    }

    if(dem!=0) cout<<dem<<' '<<snt<<' '<<vt;
    else cout<<"khong co";
}
