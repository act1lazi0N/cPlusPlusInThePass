#include<bits/stdc++.h>
using namespace std;
string s;
long long t=0,kq=0;
int main()
{
    freopen("CHAMTHI.IN","r",stdin);
    freopen("CHAMTHI.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='C')
        {
            t++;
            kq+=t;
        }
        else
            t=0;
    }
    cout<<kq;
}
