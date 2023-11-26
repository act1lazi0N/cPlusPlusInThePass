#include <bits/stdc++.h>
using namespace std ; 

int main ()
{
    string s,s1="" ; 
    getline(cin,s);
    int dem =1;
    for ( int i = 0 ; i<s.size();i++)
    {
    	if ( s[i]==' ')dem++;
	}
	cout << dem << endl;
	for ( int i = 0 ; i <s.size();i++)
	{
		s1.push_back(s[i]);
		if ( s[i]==' ')
		{
			cout << s1<<endl;
			s1="";
		}
		if ( i==s.size()-1)
		cout << s1;
	}
	
	return 0 ;
}
