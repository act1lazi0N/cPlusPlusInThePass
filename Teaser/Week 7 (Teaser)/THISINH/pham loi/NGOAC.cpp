#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,r=0;
    for(int i=0;i<s.size();i++)
    {if(s[i]!=')'&&s[i]!='('){cout<<"KHONG HOP LE";return 0;}
     if(s[i]=='(')l++;
     if(s[i]==')')r++;
     if(r>l){cout<<"KHONGDUNG";return 0;}
    }
    if(r!=l)cout<<"KHONGDUNG";
    else cout<<"DUNG";
}
