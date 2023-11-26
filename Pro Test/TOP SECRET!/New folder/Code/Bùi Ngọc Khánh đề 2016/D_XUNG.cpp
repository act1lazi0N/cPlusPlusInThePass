#include<bits/stdc++.h>
using namespace std;

string s;
double i,k;
int a,b,l,r,x,j;
pair<int,int> t[200010];

int main()
{
    freopen("D_XUNG.INP","r",stdin);
    freopen("D_XUNG.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;
    s=' '+s;

    for(i=1;i<s.size();i+=0.5)
    {
        x=(int)(i*2);
        a=b=-1;
        if(i==(int)i)
        {
            a=i;
            b=i;
        }
        else
        {
            a=floor(i);
            b=floor(i)+1;
            if(s[a]!=s[b])
            {
                t[x].first=-1;
                t[x].second=-1;
                continue;
            }
        }
        for(;a>=1;)
        {
            if(s[a-1]==s[b+1])
            {
                a--;
                b++;
            }
            else break;
        }
        t[x].first=a;
        t[x].second=b;
    }

    cin>>k;

    for(j=0;j<k;j++)
    {
        cin>>l>>r;
        x=l+r;
        if(t[x].first<=l&&t[x].second>=r)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
