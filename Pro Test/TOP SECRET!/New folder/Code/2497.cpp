#include<bits/stdc++.h>
using namespace std;
int ham(string a,string b)
{
    if(a==b) return 0;
    if(a.size()>b.size()) return 1;
    if(a.size()<b.size()) return 0;
    if(a>b) return 1;
    else return 0;
}
int main()
{
    string s,r;cin>>s;string a[163];
    int sa=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0') break;
        else sa++;
    }
    s.erase(0,sa);
    r=s;
    int t1=0,t2=0,kq=0;
    for(int i=0;i<s.size();i++)
    {
        s=r;
        s[i]--;
        t2=t1+s[i]-'0';
        for(int j=i+1;j<s.size();j++)
        {
            t2+=9;
            s[j]='9';
        }
        if(s[0]=='0') s.erase(0,1);
        if(t2>=kq)
        {
            kq=t2;
            if(ham(s,a[t2])==1) a[t2]=s;
        }
        t1=t1+r[i]-'0';
    }
    if(t1>=kq)
    {
        kq=t1;
        if(ham(r,a[t1])==1) a[t1]=r;
    }
    cout<<a[kq];
}

