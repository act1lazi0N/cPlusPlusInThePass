#include <bits/stdc++.h>
using namespace std ;

int main ()
{
	string s ;
	getline(cin,s);
	for ( int i = 0 ; i<s.size();i++)
	{
		if ( s[i]==' '&&s[i+1]==' ')
	     {
	     	s.erase(i,1);
	     	i--;
		 }
		if ( s[0]==' ')s.erase(0,1);
		if ( s[s.size()-1]==' ')s.erase(s.size()-1,1);
	}
	if ( s[0]<='z'&&s[0]>='a')s[0]-=32;
	for ( int i =1 ; i<s.size();i++)
	{
        if ( s[i]<='Z'&&s[i]>='A')s[i]+=32;
	}
	for (int i =0 ; i<s.size();i++)
	{
			if(s[i]==' '){
		if ( s[i+1]<='z'&&s[i+1]>='a')
		s[i+1]-=32;
	}}
	cout << s ;
	return 0 ;
}
