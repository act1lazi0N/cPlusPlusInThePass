#include<iostream>
using namespace std;
string s;
long long n[1000001],p[1000001],kq;
int main()
{
    freopen("VOCAB.INP","r",stdin);
    freopen("VOCAB.OUT","w",stdout);
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            p[i]=p[i+1]+1;
        else
            p[i]=p[i+1];
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            n[i]=n[i+1]+1;
        else
            n[i]=n[i+1];
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            kq+=n[i+1];
        else
            kq+=p[i+1];
    }
    cout<<kq;
}
