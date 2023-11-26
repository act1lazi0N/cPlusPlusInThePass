#include<bits/stdc++.h>
using namespace std;
int main()
{  string s;
 cin>> s;
 vector<int> m;
 for( char i='0';i<='9';i++)
 {   int t=0;
     if(s.find(i)!=-1)
     {
         while(s.find(i)!=-1)
         {
             t++;
             s.erase(s.find(i),1);
         }

     m.push_back(t);}
     else m.push_back(t);
 }
 for(int i=0;i<=9;i++)
 {
     cout<< m[i]<<" ";
 }}
