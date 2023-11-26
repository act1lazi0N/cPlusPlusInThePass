#include<bits/stdc++.h>
using namespace std;
int p[1005],n,t=0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int i=n-1;i>=0;i--)
    {
        if(p[i]>100)
        {
            int maxx=-1,vt=i+1;
            for(int j=i+1;j<n;j++)
            {
                if(p[j]>maxx)
                {
                    maxx=p[j];
                    vt=j;
                }
            }
            p[vt]=0;
        }
    }
    for(int i=0;i<n;i++)
        t+=p[i];
    cout<<t;
}
