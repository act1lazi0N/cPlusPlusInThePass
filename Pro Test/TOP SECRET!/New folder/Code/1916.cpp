#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],d,r,i;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    i=n-1;
    for(; i>=1; i--)
        if(a[i]==a[i-1])
        {
            d=a[i];
            break;
        }
    i-=2;
    for(; i>=1; i--)
        if(a[i]==a[i-1])
        {
            r=a[i];
            break;
        }
    if(d==0||r==0) cout<<-1;
    else cout<<d*r;
}
