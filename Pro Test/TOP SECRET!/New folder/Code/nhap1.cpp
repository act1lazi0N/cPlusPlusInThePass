#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],b[1000][1000];
int n,i,j,tmp;
int min(int a,int b)
{
    return (a<b) ? a:b;
}
int main()
{
    cin>>n;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0) a[i][j]=1;
            else a[i][j]=0;
        }

    for (i=0; i<n; i++) b[0][i]=a[0][i];
    for (i=0; i<n; i++) b[i][0]=a[i][0];
    for (i=1; i<n; i++)
        for (j=1; j<n; j++)
        {
            if(a[i][j]==1) b[i][j]=min(min(b[i-1][j-1],b[i][j-1]),b[i-1][i])+1;
            else b[i][j]=0;
        }
    tmp=b[0][0];
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (tmp < b[i][j]) tmp=b[i][j];
    cout<<tmp;
}
