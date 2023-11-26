#include<bits/stdc++.h>
using namespace std;
string ham(string s)
{
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i=0;i<s.size();i++)
    {
        if(s[i+1]==' '&&s[i]==' ') {s.erase(i,1);i--;}
        if(s[i-1]==' ') s[i]-=32;
    }
    if (s[0]==' ') s.erase(0,1);
    else s[0]-=32;
    if (s[s.size()-1]==' ') s.erase(s.size()-1,1);
    return s;
}
int main ()
{
    string s;getline(cin,s);
    cout<<ham(s);
    return 0;
}
