#include<bits/stdc++.h>
using namespace std;
int main()
{ string a,b,c;
  cin>> a;
  cin>> b;
   std::fflush(stdin);
   getline(cin,c);
   for(int i=0;i< c.size();i++)
   {   if(c.find(a)!=-1)
      {
          c.replace(c.find(a),a.size(),b);

      }
   }

   for(int i=0;i<c.size();i++)
   { cout<<c[i];}


}
