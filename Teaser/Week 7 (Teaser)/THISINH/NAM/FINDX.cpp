#include <bits/stdc++.h>
using namespace std;
int main(){

 string s;
  getline(cin, s);
   char x;x=s[0] ;
   
   getline(cin, s);int t=0,g=s.size();
for(int i=0;i<g;++i)
{  if(s[i]==x)t++;}     
    cout<<t<<"\n";
for(int i=0;i<g;++i)
{
    if(s[i]==x)cout<<i;
}
    return 0;
}
