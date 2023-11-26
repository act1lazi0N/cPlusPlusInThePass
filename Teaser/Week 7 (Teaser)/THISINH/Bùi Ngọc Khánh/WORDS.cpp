#include<bits/stdc++.h>
using namespace std;
string ham(string s)
{
    for (int i=0;i<s.size()-1;i++) if(s[i+1]==' '&&s[i]==' ') {s.erase(i,1);i--;}
    if (s[0]==' ') s.erase(0,1);
    if (s[s.size()-1]==' ') s.erase(s.size()-1,1);
    return s;
}
int main ()
{
    string s;getline(cin,s);
    s=ham(s);
    int kq=1;
    if(s.size()==0) kq=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ') kq++;
    }
    cout<<kq<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ') {cout<<endl;continue;}
        cout<<s[i];
    }
    return 0;
}
