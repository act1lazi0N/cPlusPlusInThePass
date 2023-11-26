#include<bits/stdc++.h>
using namespace std;
 int main()
 { string s;
  getline(cin,s);
  while (s[0]==' ')
{ s.erase(0,1);}

while (s[s.size()-1]==' ')
{s.erase(s.size()-1,1);}

for(int i=0; i<= s.size()-1 ;i++)
if ((s[i]==' ')&&(s[i+1]==' '))
{
strcpy(&s[i],&s[i+1]);
i--;
}  if(s[0]>='a'&& s[0]<='z')
   {
       s[0]-=32;
   }
for(int i=0;i<=s.size()-1;i++)
  {   if(s[i]==' '&&s[i+1]!=' ')
      {  if(s[i+1]>=96 && s[i+1]<=122)
          s[i+1]=s[i+1]-32; }
      if(s[i]!
         =' ')
      {
          if(s[i+1]>='A'&& s[i+1]<='Z')
            s[i+1]=s[i+1]+32;
      }

  }
  for(int i=0;i<=s.size()-1;i++)
  { cout<<s[i];}}
