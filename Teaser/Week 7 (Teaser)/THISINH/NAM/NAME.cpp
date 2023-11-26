#include <bits/stdc++.h>
using namespace std;
int main(){
  string s,k;
  getline(cin, s);
transform(s.begin(),s.end(),s.begin(),::tolower);
   int g=s.length();
  for (int i=0;i<g-1;++i)  { if (s[i]==' '&& s[i+1]==' ')
   { s.erase(i,1);i--;}} 
 if (s[g-1]==' ') s.erase(g-1,1);
 if (s[0]==' ') s.erase(0,1);
  s[0]=s[0]-32;
 for (int i=0;i<g;++i)
 for (int i=0;i<g-1;++i)  { if (s[i]==' '&& s[i+1]!=' ')
   { s[i+1]-=32;}     
  }cout<<s;           
 
  return 0;}
