
#include<bits/stdc++.h>
using namespace std;
int n, a[100002];
map<int,int> p;
vector<int> b;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]=0;
    }
    sort(a,a+n);
    a[n] =-1;
    for (int i=0; i<n; i++)
        p[a[i]]++;
    for (int i=0; i<n; i++)
        if (a[i]!=a[i+1])
            b.push_back(a[i]);
    int t=0;
    int kq=n;
    for (int i=0;i< b.size();i++)
    {
        t+=p[b[i]];
        if (b[i]+(n-t) < kq)
            kq=b[i]+(n-t);
    }
    cout<<kq;
    return 0;
}
