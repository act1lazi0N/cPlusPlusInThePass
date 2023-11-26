#include<bits/stdc++.h>
using namespace std;
int n;
typedef pair <int,int> ii;
ii a[999];
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>a[i].second;
}
sort(a,a+n);
for(int i=1;i<=n/2;i++)
    cout<<a[i].second<<" "<<a[n-i].second<<endl;
}
