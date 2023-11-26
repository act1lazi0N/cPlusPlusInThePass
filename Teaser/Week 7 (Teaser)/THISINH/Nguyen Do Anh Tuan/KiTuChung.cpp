#include <bits/stdc++.h>
using namespace std ;

int main ()
{
	string s1,s2,a="",b="";
	cin >> s1 >> s2 ; 
	 for(char i='a'; i<='z'; i++)
     {
		   if(s1.find(i)!=-1)
    {
        while(s1.find(i)!=-1) {s1.erase(s1.find(i),1);}
        a+=i;}
        
        if(s2.find(i)!=-1)
    {
        while(s2.find(i)!=-1) {s2.erase(s2.find(i),1);}
        b+=i;}
}
a.insert(0, b);
vector<char>h;
 for(char i='a'; i<='z'; i++)
        if(a.find(i)!=-1)
    {
        int t=0;
        while(a.find(i)!=-1) {t++; a.erase(a.find(i),1);}
      if (t>1)h.push_back(i);  }
      for (int i =0;i<h.size()-1;i++)
      cout <<h[i]<<endl;
      cout <<h[h.size()-1];
return 0;	
}
