#include <bits/stdc++.h>
using namespace std ;

int main ()
{
	string s,s1 ; 
	getline(cin,s);
	getline(cin,s1);
	int dem=0;
	vector<int>h;
	for ( int i =0;i<s1.size();i++)
	{
		if ( s1[i]==s[0])
		{
			dem++;h.push_back(i);
		}
	}
	cout << dem<<endl;
	for ( int i =0;i<h.size();i++)
	cout << h[i]<< " ";
	return 0;
}
