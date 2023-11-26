#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,s,h=1000000007;
    cin>>a>>n;
    s=(a%h)*((n*(n+1)/2)%h);
    cout<<s%h;
}
