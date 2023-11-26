#include <bits/stdc++.h>
using namespace std ;

int main ()
{
	string s ,s1="(",s2=")";
	cin >> s ; 
	int a=0,b=0,k;
	for ( int i = 0 ;i<s.size();i++)
	if (s[i]!='('&&s[i]!=')')
	{
		cout << "KHONG HOP LE";break;return 0 ;
	}else k =1 ;
	if (k==1)
	{
	while(s.find(s1)!=-1) {a++; s.erase(s.find(s1),1);}
	while(s.find(s2)!=-1) {b++; s.erase(s.find(s2),1);}
	if (a==b)cout << "DUNG";
	else cout <<"KHONG DUNG";
	return 0 ;
    }
}
