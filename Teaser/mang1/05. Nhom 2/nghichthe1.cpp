#include<bits/stdc++.h>
using namespace std;
int n,a[101];
/******************************/
int main()
{
    freopen("nghichthe1.inp","r",stdin);
    freopen("nghichthe1.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        int dem=0;
        for(int j=1;j<i;j++)
            if(a[j]>a[i]) dem++;
        cout<<dem<<' ';
    }
    return 0;
}
