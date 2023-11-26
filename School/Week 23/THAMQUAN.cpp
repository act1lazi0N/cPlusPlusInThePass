#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int ans =0;
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+m);
    for(int i=0;i<n;i++) ans+=(a[i]*b[i]);
    cout << ans;
}

