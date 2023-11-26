#include<bits/stdc++.h>
using namespace std;
long long ham(string s)
{
    long long k=0,x=0,t=0,x1=1;
    string r="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('&&x==0) {x=1;t++;continue;}
        if(x==1)
        {
            if(s[i]=='(') t++;
            if(s[i]==')') t--;
            if(t!=0) r+=s[i];
            else
            {
                if(s[i+1]>='0'&&s[i+1]<='9')
                    x1=s[i+1]-'0';
                k+=(ham(r)*x1);
                r="";
                x=0;
                x1=1;
            }
        }
        else
        {
            if(s[i]=='C')
            {
                if(s[i+1]>='0'&&s[i+1]<='9')
                    x1=s[i+1]-'0';
                k+=(12*x1);
                x1=1;
            }
            if(s[i]=='H')
            {
                if(s[i+1]>='0'&&s[i+1]<='9')
                    x1=s[i+1]-'0';
                k+=(1*x1);
                x1=1;
            }
            if(s[i]=='O')
            {
                if(s[i+1]>='0'&&s[i+1]<='9')
                    x1=s[i+1]-'0';
                k+=(16*x1);
                x1=1;
            }
        }
    }
    return k;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        cout<<ham(s)<<'\n';
    }
}
