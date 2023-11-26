#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long k;cin>>k;
    unsigned long long n=k/5,r=k%5;
    unsigned long long kq=150*(n*(n+1)/2);
    cout<<kq+r*(n+1)*30;
}
