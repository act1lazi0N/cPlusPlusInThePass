#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int t=s[i]-'A';
        if(a[t]==0)
        {
            cout<<s[i];
            a[t]=1;
        }
    }
}
