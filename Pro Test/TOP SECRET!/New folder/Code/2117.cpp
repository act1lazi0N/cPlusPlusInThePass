#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],b[100001];
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==1) b[i]=a[i]+k;
        else b[i]=a[i];
    }
    nth_element(b+1,b+(n+1)/2,b+1+n);
    long long  s1=0;
    for(int i=1; i<=n; i++)
    {
        s1+=abs(long((b[i]-b[(n+1)/2])));
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==1) b[i]=a[i]-k;
        else b[i]=a[i];
    }
    nth_element(b+1,b+(n+1)/2,b+1+n);
    long long s2=0;
    for(int i=1; i<=n; i++)
    {
        s2+=abs(long((b[i]-b[(n+1)/2])));
    }
    cout<<min(s1,s2);
}
