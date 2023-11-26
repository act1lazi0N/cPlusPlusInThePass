#include <bits/stdc++.h>
using namespace std;
int n,w,a[200002];
int main()
{
    cin>>n>>w;
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+2*n);
    double x,x1=((double)w)/((double)(3*n)),x2=((double)a[0]),x3=((double)a[n])/2;
    if(x1<x2)
    {
        x=x1;
    }
    else x=x2;
    if(x3<x) x=x3;
    cout<<setprecision(6)<<fixed<<x*3*((double)n);
}
