#include<bits/stdc++.h>
using namespace std;
int n,a[100002],b[100002],best[100002],m=0;
int main()
    {
        ios::sync_with_stdio();
        cin.tie(0);
        cout.tie(0);
       cin>>n;
       for(int i=1;i<=n;i++)
            cin>>a[i];

       for(int i=1;i<=n;i++)
       {
           best[i]=lower_bound(b+1,b+1+m,a[i])-b;
           b[best[i]]=a[i];
         	m=max(m,best[i]);
       }
      cout<<m;

    }
