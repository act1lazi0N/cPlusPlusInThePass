#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for ( int i =0 ; i<s2.size();i++)
	{
		if ( s2[i]==s1[0])s2.erase(i,1);
	}
	cout << s2;
	return 0 ;
}
