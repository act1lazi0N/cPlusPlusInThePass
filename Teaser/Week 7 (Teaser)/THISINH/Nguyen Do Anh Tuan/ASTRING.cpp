#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
	string s,s1 ; 
	cin >> s ; 
	for ( int i=s.size()-1;i>=0;i--)
	{
		s1.push_back(s[i]);
	}
	cout << s1;
	return 0; 
}
