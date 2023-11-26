#include<bits/stdc++.h>
using namespace std;
long long n,x,l=0,c=0,dem;
/*************************/
int main()
{
    freopen("ddelete.inp","r",stdin);
    freopen("ddelete.out","w",stdout);

    cin>>n;
    for(long i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0) c++;
        else l++;
    }
    if(l%2==0) dem=l*(l-1)/2+c*(c-1)/2;
    else dem=l*c;
    cout<<dem;
}
