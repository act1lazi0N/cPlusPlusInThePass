#include <bits/stdc++.h>

using namespace std;
int n,x,l=0,c=0;
int main()
{
    freopen("DDELETE.INP","r",stdin);
    freopen("DDELETE.OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin >>x;
        if (x%2==0) c++;
        else l++;
    }
    if (l%2==1) cout << l*c;
    else cout << (l-1)*l/2+(c-1)*c/2;
    return 0;
}
