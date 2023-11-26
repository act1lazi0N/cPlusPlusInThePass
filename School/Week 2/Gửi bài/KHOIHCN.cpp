#include<bits/stdc++.h>
using namespace std;

void hhcn () {
	int a, b, c, x, y; 
	cin >> a >> b >> c >> x >> y;
	if (a * b <= x * y && a * c <= x * y && b * c > x * y)
	{
		cout << "KHONG";
	}
	else if (a * b <= x * y && a * c > x * y && b * c <= x * y)
	{
		cout << "KHONG";
	}
	else if (a * b > x * y && a * c <= x * y && b * c <= x * y)
	{
		cout << "KHONG";
	}
	else if (a * b <= x * y && a * c > x * y && b * c > x * y)
	{
		cout << "CO";
	}
	else if (a * b > x * y && a * c <= x * y && b * c > x * y)
	{
		cout << "CO";
	}
	else if (a * b > x * y && a * c > x * y && b * c <= x * y)
	{
		cout << "CO";
	}
	else if (a * b <= x * y && a * c <= x * y && b * c <= x * y)
	{
		cout << "CO";
	}
	else if (a * b > x * y && a * c > x * y && b * c > x * y)
	{
		cout << "KHONG";
	};
	
}
int main() {
	
	hhcn();
	return 0;
}