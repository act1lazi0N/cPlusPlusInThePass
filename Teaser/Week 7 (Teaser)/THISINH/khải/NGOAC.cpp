#include<bits/stdc++.h>
using namespace std;
string ham(string s)
{
    for(;s.find("()")!=-1;) s.erase(s.find("()"),2);
    return s;
}
int main ()
{
    string s;getline(cin,s);
    s=ham(s);
    if(s.size()==0) {cout<<"DUNG";return 0;}
    for(int i=0;i<s.size();i++)
    if(s[i]!='('&&s[i]!=')') {cout<<"KHONG HOP LE";return 0;}
    cout<<"KHONG DUNG";
    return 0;
}
