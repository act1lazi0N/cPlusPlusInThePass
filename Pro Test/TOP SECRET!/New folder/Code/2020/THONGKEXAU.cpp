#include<bits/stdc++.h>
using namespace std;

string s;
int chu_thuong[35],chu_hoa[35],chu_so[11],i,t,dem=0;
char c;

int main()
{
    freopen("THONGKEXAU.INP","r",stdin);
    freopen("THONGKEXAU.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            t=s[i]-'a';
            if(chu_thuong[t]==0)
                dem++;
            chu_thuong[t]++;
        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            t=s[i]-'A';
            if(chu_hoa[t]==0)
                dem++;
            chu_hoa[t]++;
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            t=s[i]-'0';
            if(chu_so[t]==0)
                dem++;
            chu_so[t]++;
        }
    }

    cout<<dem<<'\n';
    for(i=0; i<=9; i++)
    {
        if(chu_so[i]!=0)
        {
            if(chu_so[i]!=1)
                cout<<chu_so[i]<<' '<<i<<'\n';
            else
                cout<<i<<'\n';
        }
    }
    for(i=0;i<=35;i++)
    {
        if(chu_thuong[i]!=0)
        {
            c='a'+i;
            if(chu_thuong[i]!=1)
                cout<<chu_thuong[i]<<' '<<c<<'\n';
            else
                cout<<c<<'\n';
        }
    }
    for(i=0;i<=35;i++)
    {
        if(chu_hoa[i]!=0)
        {
            c='A'+i;
            if(chu_hoa[i]!=1)
                cout<<chu_hoa[i]<<' '<<c<<'\n';
            else
                cout<<c<<'\n';
        }
    }
}
