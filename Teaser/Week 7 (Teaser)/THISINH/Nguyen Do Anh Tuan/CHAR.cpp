#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
	string s ; 
	getline(cin,s) ; 
	//string chu="abcdegf"
	for ( int i =0 ; i<s.size();i++)
	{
		if (s[i]<='Z'&&s[i]>='A')
		{
			s[i]+=32;
		}
	}
	  for(char i='a'; i<='z'; i++)
        if(s.find(i)!=-1)
    {
        int t=0;
        while(s.find(i)!=-1) {t++; s.erase(s.find(i),1);}
        cout<<i<<" "<<t<<endl;}
	return 0 ;
}
