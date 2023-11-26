#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    while(s[0]==' ')s.erase(0,1);
    while(s[s.size()-1]==' ')s.erase(s.size()-1,1);
  for(int i=0;i<s.size()-1;i++)
  {   while(s[i]==' '&&s[i+1]==' ')
      {s.erase(i,1);}
  }
  transform(s.begin(),s.end(),s.begin(),::tolower);
  s[0]-=32;
  for(int i=1;i<s.size()-1;i++)
    if(s[i]==' ')s[i+1]=s[i+1]-32;
    cout<<s;
}
