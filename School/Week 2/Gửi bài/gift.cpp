#include<bits/stdc++.h>
using namespace std;

void qua(int n)
{
	cin >> n;
	n = n / 2;
	if (n % 2 == 0) {
		cout << n << " " << n << endl;
	}
	else {
		cout << n << " " << n + 1 << endl;
	};
}
int main()
{
	qua('n');
	return 0;
}