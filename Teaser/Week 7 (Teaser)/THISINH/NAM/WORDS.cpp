
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s,k;
  getline(cin, s);
   int g=s.length();
  for (int i=0;i<g-1;++i)  { if (s[i]==' '&& s[i+1]==' ')
   { s.erase(i,1);i--;}} 
 if (s[g-1]==' ') s.erase(g-1,1);
 if (s[0]==' ') s.erase(0,1);
int t=0;
 for(int i=0; i<g;++i)
   {
       if(s[i]==' ')++t; }
 cout<<t+1<<"\n";
  for(int i=0; i<g;++i)
   { 
   if(s[i]!=' ')      
  cout<<s[i];  else {cout<<"\n";}
        
             }
 
  return 0;}
