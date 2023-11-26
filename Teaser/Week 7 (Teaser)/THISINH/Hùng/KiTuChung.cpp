#include<bits/stdc++.h>
using namespace std;
int main()
{ string a,b;
   cin>>a>>b;
   vector<char> t;
   for(char i='a';i<='z';i++)
   { if(a.find(i)!=-1 && b.find(i)!=-1)
      t.push_back(i);}
      for(int i=0;i< t.size();i++)
      { cout<< t[i]<<endl;}}
