#include<bits/stdc++.h>
using namespace std;

int n,x[105],y[105],i,j,t,c1,c2,kq=0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=1; i<=n; i++)
        cin>>x[i]>>y[i];

    for(i=1; i<=n-2; i++)
        for(j=i+1; j<=n-1; j++)
            for(t=j+1; t<=n; t++)
            {
                if(x[i]==x[j]&&y[i]==y[t])
                {
                    c1=abs(y[i]-y[j]);
                    c2=abs(x[i]-x[t]);
                    kq=max(kq,c1*c2);
                }
                if(x[i]==x[j]&&y[j]==y[t])
                {
                    c1=abs(y[i]-y[j]);
                    c2=abs(x[j]-x[t]);
                    kq=max(kq,c1*c2);
                }
                if(x[i]==x[t]&&y[j]==y[t])
                {
                    c1=abs(y[i]-y[t]);
                    c2=abs(x[j]-x[t]);
                    kq=max(kq,c1*c2);
                }

                if(x[i]==x[t]&&y[i]==y[j])
                {
                    c1=abs(y[i]-y[t]);
                    c2=abs(x[i]-x[j]);
                    kq=max(kq,c1*c2);
                }
                if(x[t]==x[j]&&y[j]==y[i])
                {
                    c1=abs(y[t]-y[j]);
                    c2=abs(x[j]-x[i]);
                    kq=max(kq,c1*c2);
                }
                if(x[j]==x[t]&&y[i]==y[t])
                {
                    c1=abs(y[j]-y[t]);
                    c2=abs(x[i]-x[t]);
                    kq=max(kq,c1*c2);
                }
            }
    cout<<kq;
}
