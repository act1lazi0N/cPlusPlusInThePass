#include<bits/stdc++.h>
using namespace std;

string s,s1;
int length=0,a[200010],i,l,r;

void buoc_1()
{
    s1='.';
    for(i=0;i<s.size();i++)
    {
        s1=s1+s[i]+'.';
        length+=2;
    }

    s=s1;
}

void buoc_2()
{

}

int main()
{
    freopen("manacher.INP","r",stdin);
    freopen("manacher.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    buoc_1();

    buoc_2();

    for(i=0;i<=length;i++)
        cout<<s[i]<<' ';
    cout<<'\n';
    for(i=0;i<=length;i++)
        cout<<a[i]<<' ';
}
