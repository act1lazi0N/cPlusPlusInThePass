#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("OLYMPIC.INP","r",stdin);
    freopen("OLYMPIC.OUT","w",stdout);
    int n,m,t;scanf("%d%d",&n,&m);
    int a1[n+1],a2[n+1],a3[n+1];
    a1[0]=0;a2[0]=0;a3[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        a1[i]=a1[i-1];a2[i]=a2[i-1];a3[i]=a3[i-1];
        if (t==1) a1[i]++;
        else
        {
            if (t==2) a2[i]++;
            else a3[i]++;
        }
    }
    vector<int> kq1,kq2,kq3;
    int l,r;
    for (int i=0;i<m;i++)
    {
        scanf("%d%d",&l,&r);
        kq1.push_back(a1[r]-a1[l-1]);
        kq2.push_back(a2[r]-a2[l-1]);
        kq3.push_back(a3[r]-a3[l-1]);
    }
    for (int i=0;i<m;i++)
    {
        printf("%d %d %d\n",kq1[i],kq2[i],kq3[i]);
    }
}
