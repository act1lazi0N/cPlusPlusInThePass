#include<bits/stdc++.h>
using namespace std;
int vt(string s)
 {
     vector<int>m;
     for( int i= 0;i<s.size();i++)
     {    int d=0;
         for(int j=0; j<=s.size(); j++) {

            j=0;

            while(j<=s.size()) {

                if(s[i]==s[j]) {d++;}

                j++;

                        }

            } m.push_back(d);
     }
     for(int i=0;i< m.size();i++)
     {
         if(m[i]==1)  return i;break;
     }
      return -1;
 }


 int main()
 { int n,d;
 string s;
   cin>>n;
    vector<int> m;
    vector<int> p;
   for(int i=1;i<=n;i++)
   {  cin>> s;
     p.push_back(vt(s)); }
 for(int i=0;i< p.size();i++)
{
    cout<<p[i]<<endl;
}
 }
