#include<bits/stdc++.h>
using namespace std;

double x,y,xmax,ymax,xmin,ymin,s;
int n,i;

int main()
{
    freopen("POLYGON.INP","r",stdin);
    freopen("POLYGON.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    cin>>x>>y;

    xmax=xmin=x;
    ymax=ymin=y;

    for(i=2;i<=n;i++)
    {
        cin>>x>>y;
        xmax=max(x,xmax);
        xmin=min(x,xmin);
        ymax=max(y,ymax);
        ymin=min(y,ymin);
    }

    s=(xmax-xmin)*(ymax-ymin);
    cout<<setprecision(4)<<fixed<<s;
}
