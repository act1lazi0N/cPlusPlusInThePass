#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,k,m=0,kq=0,t;
    scanf("%d%d",&N,&k);
    for(int i=0; i<k; i++)
    {
        scanf("%d",&t);
        for(int j=t; j<=N; j+=t)
        {
            if(a[j]==0)
            {
                a[j]=1;
                m++;
            }
            else
            {
                a[j]=0;
                m--;
            }
        }
        if(m>kq) kq=m;
    }
    printf("%d",kq);
}

