#include<bits/stdc++.h>
using namespace std;
int na,nb,k,m,a[100005],b[100005];
int main()
{
    cin>>na>>nb>>k>>m;
    for(int i=0;i<na;i++)
        cin>>a[i];
    for(int i=0;i<nb;i++)
        cin>>b[i];
    sort(a,a+na);
    sort(b,b+nb);
    if(a[k-1]<b[nb-m])
        cout<<"YES";
    else
        cout<<"NO";
}
