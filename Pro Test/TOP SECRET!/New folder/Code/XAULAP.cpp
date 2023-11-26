#include<bits/stdc++.h>
using namespace std;

int n,i,kq=0,j,t;
pair<int,string> s[110];
string r;

int main()
{
    freopen("XAULAP.IN","r",stdin);
    freopen("XAULAP.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s[i].second;
        s[i].first=s[i].second.size();
    }

    sort(s,s+n,greater<pair<int,string>>());

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if((s[i].first%s[j].first==0)&&(s[i].first!=s[j].first))
            {
                r="";
                for(t=0;t<s[i].first/s[j].first;t++)
                {
                    r+=s[j].second;
                }
                if(r==s[i].second)
                {
                    kq++;
                    break;
                }
            }
        }

    cout<<kq;
}
