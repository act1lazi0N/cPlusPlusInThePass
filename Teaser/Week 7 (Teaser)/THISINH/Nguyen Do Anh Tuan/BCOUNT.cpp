#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
	string s ; 
	getline(cin,s);
	string so="0123456789";
	int a[10]={0};
	for ( int i =0;i<s.size();i++)
	{
		for (int j=0;j<=9;j++)
		{
			if (s[i]==so[j])a[j]++;
		}
	}
	for ( int i=0;i<=9;i++)
	{
		cout << a[i] <<" ";
	}
	return 0 ;
}
