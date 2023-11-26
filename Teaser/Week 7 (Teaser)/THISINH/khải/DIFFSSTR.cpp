#include<bits/stdc++.h>
using namespace std;
bool ham(string s)
{
    sort(s.begin(),s.end());
    int t=0;
    for(;s.size()!=0;)
    {
        t=s.rfind(s[0])+1;
        if (t>1) return 0;
        s.erase(0,1);
    }
    return 1;
}
int main ()
{
    int n,max=0;string s,r="";
    cin>>n>>s;
    for (int i=0;i<n;i++)
    for (int j=i;j<n;j++)
    {
        r+=s[j];
        if (ham(r)==0) {r="";break;}
        if(r.size()>max) max=r.size();
    }
    cout<<max;
    return 0;
}
