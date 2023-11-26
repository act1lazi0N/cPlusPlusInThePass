#include<bits/stdc++.h>
using namespace std;

string s,x;
int i,j,dem,t;

void ham(string r,char c)
{
    dem=0,t=1;
    for(j=r.size()-1; j>=0; j--)
    {
        dem+=((r[j]-'0')*t);
        t*=10;
    }
    for(j=0; j<dem; j++)
        cout<<c;
}

int main()
{
    freopen("GNEN.INP","r",stdin);
    freopen("GNEN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            x+=s[i];
        else
        {
            if(x!="")
            {
                ham(x,s[i]);
                x="";
            }
            else
                cout<<s[i];
        }
    }
}
