#include <bits/stdc++.h>
using namespace std;
int main(){
 string s,s1,s2; int t;
  getline(cin, s1);
   getline(cin, s2);
   getline(cin, s);
for (;s.find(s1)!=-1;)
{  t=s.find(s1);
     s.erase(t,s1.size());
 s.insert(t,s2);

 }cout<<s;
 return 0;}
