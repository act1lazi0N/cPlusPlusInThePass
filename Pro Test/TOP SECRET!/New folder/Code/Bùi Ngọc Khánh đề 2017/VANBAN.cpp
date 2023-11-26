#include<bits/stdc++.h>
using namespace std;

string s;
int a[35],t,i,dem=0;
char c;

int main()
{
    freopen("VANBAN.INP","r",stdin);
    freopen("VANBAN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            t=s[i]-'A';
            if(a[t]==0) dem++;
            a[t]++;
        }
        else
        {
            t=s[i]-'a';
            if(a[t]==0) dem++;
            a[t]++;
        }
    }

    cout<<dem<<'\n';
    for(i=0;i<35;i++)
        if(a[i]!=0)
        {
            c='A'+i;
            cout<<c<<' '<<a[i]<<'\n';
        }
}
