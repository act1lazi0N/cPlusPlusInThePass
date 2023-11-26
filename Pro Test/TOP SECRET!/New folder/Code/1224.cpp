#include <bits/stdc++.h>
using namespace std;
int n;
string s;
map<string,int> p;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(p[s]!=0)
        {
            cout<<s<<p[s]<<'\n';
            p[s]++;
        }
        else
        {
            cout<<"OK"<<'\n';
            p[s]++;
        }
    }
}
