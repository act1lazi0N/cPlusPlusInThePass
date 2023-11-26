#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;getline(cin,s);
  vector<string> p;
  int t=0,x=0,y=0;
  while(s[0]==' ')s.erase(0,1);
  while(s[s.size()-1]==' ')s.erase(s.size()-1,1);
  for(int i=0;i<s.size()-1;i++)
  {   while(s[i]==' '&&s[i+1]==' ')
      {s.erase(i,1);}
  }
  for(int i=0;i<s.size();i++)
  {
      if(s[i]==' '){t++;p.push_back(s.substr(x,i-x));x=i+1;}

  }
  cout<<t+1<<endl;
  for(int i=0;i<p.size();i++)
    cout<<p[i]<<endl;
    cout<<s.substr(x,s.size()-1);



}
