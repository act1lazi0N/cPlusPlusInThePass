#include<bits/stdc++.h>
using namespace std;

void tamgiac()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	};
		
	
}



int main()
{
	tamgiac();
	return 0;
}