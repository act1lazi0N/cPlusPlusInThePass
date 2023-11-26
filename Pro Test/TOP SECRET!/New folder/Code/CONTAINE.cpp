#include<bits/stdc++.h>
using namespace std;

int l[5][4],w[5][4],h[5][4],i,j;

int main()
{
    freopen("CONTAINE.INP","r",stdin);
    freopen("CONTAINE.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(i=1; i<=2; i++)
    {
        cin>>l[i][1]>>w[i][1]>>h[i][1];
        l[i][2]=w[i][1];
        w[i][2]=l[i][1];
        h[i][2]=h[i][1];
    }
    cin>>l[3][0]>>w[3][0]>>h[3][0];

    for(i=1;i<=2;i++)
        for(j=1;j<=2;j++)
        {
            if(l[1][i]+l[2][j]<=l[3][0])
            {
                if((max(h[1][i],h[2][j])<=h[3][0])&&(max(w[1][i],w[2][j])<=w[3][0]))
                {
                    cout<<"YES";
                    return 0;
                }
            }
            if(h[1][i]+h[2][j]<=h[3][0])
            {
                if((max(l[1][i],l[2][j])<=h[3][0])&&(max(w[1][i],w[2][j])<=w[3][0]))
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    cout<<"NO";
}
