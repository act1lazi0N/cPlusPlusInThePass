#include<bits/stdc++.h>
using namespace std;
int n,x,a[100005],kq=0;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0,j=n-1;
    for(;i<j;i++)
    {
        for(;i<j&&a[j]+a[i]>x;)
            {j--;}
        if(i==j) break;
        kq=max(kq,a[j]+a[i]);
    }
    cout<<kq;
}
