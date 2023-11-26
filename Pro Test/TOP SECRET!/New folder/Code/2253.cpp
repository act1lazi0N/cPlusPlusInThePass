#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int t=0,kq=0;
    for(int i=s.find('1');i<s.size();i++)
    {
        if(s[i]=='0')
            t++;
        else
        {
            kq+=t;
            t=0;
        }
    }
    cout<<kq;
}
