#include<bits/stdc++.h>
using namespace std;

void check(int n)
{
	if (n / 1000 % 10 + n / 100 % 10 == n / 10 % 10 + n % 10) {
		cout << "YES";
	}
	else {
		cout << "NO";
	};
}
int main()
{
	int n;
	cin >> n;
	check(n);
}