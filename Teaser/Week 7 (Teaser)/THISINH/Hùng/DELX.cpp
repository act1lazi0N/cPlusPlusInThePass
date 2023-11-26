#include<bits/stdc++.h>
using namespace std;
int main()
{ string s; char x;
   cin>>x;
   std::fflush(stdin);
   getline(cin,s);
   for(int i=0;i<=s.size()-1;i++)
   {
      while(s.find(x)!=-1)
      { s.erase(s.find(x),1);}
   }
   for(int i=0;i<=s.size()-1;i++)
   {  cout<<s[i];}}
