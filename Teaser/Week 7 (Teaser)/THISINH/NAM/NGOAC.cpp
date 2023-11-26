#include<bits/stdc++.h>
using namespace std;
int main ()
{    string s;int t=0,t1=0,h=0;
    getline(cin,s);
  for (int i=s.size()-1;i>=0;i--)  
 { if (s[i]==')') t++;
 if (s[i]=='(') t1++;
 if (s[i]!=')'&&s[i]!='('){cout<<"KHONG HOP LE";++h ;break;} 
 }
 if(t==t1&&h==0) cout<<"DUNG";
  if(t!=t1&&h==0) cout<<"KHONGDUNG";
    return 0;
}
