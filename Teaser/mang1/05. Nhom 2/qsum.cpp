#include<bits/stdc++.h>
using namespace std;
int n,q,x,d,c;
long a[100001];
/**************************/
int main()
{
    freopen("qsum.inp","r",stdin);
    freopen("qsum.out","w",stdout);
    a[0]=0;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=a[i-1]+x;
    }
    for(int i=1;i<=q;i++)
    {
        cin>>d>>c;
        cout<<a[c]-a[d-1]<<endl;
    }
    return 0;
}
