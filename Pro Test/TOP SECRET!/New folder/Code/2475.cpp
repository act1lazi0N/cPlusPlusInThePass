#include<bits/stdc++.h>
using namespace std;
int a[10000001],N=10000000;
void sang_ngto()
{
    a[0]=1;
    a[1]=1;
    for(int j=2*2;j<=N;j+=2)
        a[j]=1;
    for (int i=3;i<=N;i+=2)
    {
        if(a[i]==0)
        {
            for(int j=2*i;j<=N;j+=i)
                a[j]=1;
        }
    }
}
int main()
{
    sang_ngto();
    int n;cin>>n;
    int dem=0;
    for(int i=2;i<n;i++)
        if(a[i]==0) dem++;
    cout<<dem;
}
