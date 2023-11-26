#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
	string s; 
	int a,b;
	getline(cin,s);
	int c =s.size();
	for ( int i =0;i<c;i++)
	{
		if (s[i]==' ')a=i;
	}
//	cout << a ;
       for ( int i =c-1;i>=0;i--)
	{
		if (s[i]==' ')b=i;
	}
	cout << b <<" "<<a ;
	return 0 ;
}
