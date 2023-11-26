#include<bits/stdc++.h>
using namespace std;

int n,i,a[105][4],j,dem;

int main()
{
    freopen("DONTHUNG.IN","r",stdin);
    freopen("DONTHUNG.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    dem=n;

    for(j=1;j<=3;j++)
        for(i=1;i<=n;i++)
            cin>>a[i][j];

    for(i=1;i<=n;i++)
        sort(a[i]+1,a[i]+1+3);

    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        {
            if((a[j][1]>a[i][1])&&(a[j][2]>a[i][2])&&(a[j][3]>a[i][3]))
            {
                dem--;
                break;
            }
        }

    cout<<dem;
}
