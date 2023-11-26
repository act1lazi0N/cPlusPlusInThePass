#include<bits/stdc++.h>
using namespace std;
string s;
int t=0,x=0,n,c,c1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
        t+=(s[i]-'0');
    t=3-t%3;
    for(int i=0;i<n;i++)
    {
        c=s[i]-'0';
        if(c+t<=9)
        {
            x=1;
            c+=t;
            c1=(9-c)/3;
            c1*=3;
            c+=c1;
            s[i]='0'+c;
            break;
        }
    }
    if(x==1)
        cout<<s;
    else
    {
        if(t==3) t=0;
        s[n-1]-=(3-t);
        cout<<s;
    }
}
