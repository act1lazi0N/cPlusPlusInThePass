#include<bits/stdc++.h>
using namespace std;
int t,ok,c;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>s;
        s+=' ';
        string r="";
        ok=1;c=0;
        for(int i=0; i<s.size();)
        {
            if(s[i]!='B')
            {
                r+=s[i];
                c++;
                i++;
            }
            else
            {
                if(c!=0)
                {
                    i++;
                    r="";
                    c=0;
                }
                else
                {
                    if(s[i+1]=='B'||s[i+1]==' ')
                    {
                        ok=0;
                        break;
                    }
                    else
                    {
                        i+=2;
                    }
                }
            }
        }
        if(ok==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
