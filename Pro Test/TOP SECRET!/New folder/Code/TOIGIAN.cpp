#include<bits/stdc++.h>
using namespace std;
int m,n,r;
int main()
{
    cin>>m>>n;
    r=__gcd(m,n);
    cout<<m/r<<" "<<n/r;
}
