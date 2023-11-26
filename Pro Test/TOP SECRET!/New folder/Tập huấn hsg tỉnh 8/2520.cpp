#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("2520.INP","r",stdin);
    freopen("2520.OUT","w",stdout);
    int r,h;
    cin >> h>>r;
    int d=(sqrt(3)/2)*h;
    int ans= r/d;
    if(r%d==0)  ans--;
    cout<<max(ans,0);
}
