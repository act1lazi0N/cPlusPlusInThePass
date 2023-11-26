#include<bits/stdc++.h>
using namespace std;
string s;
long long a[100005],kq=0,t1=0,t2=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    s=' '+s+' ';
    for(int i=s.size()-2;i>=1;i--)
        if(s[i]==')'&&s[i+1]==')')
            a[i]=a[i+1]+1;
        else
            a[i]=a[i+1];
    for(int i=2;i<s.size()-1;i++)
        if(s[i]=='('&&s[i-1]=='(')
            kq+=a[i+1];
    cout<<kq;
}
