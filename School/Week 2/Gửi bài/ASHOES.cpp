#include<bits/stdc++.h>
using namespace std;

void giay() {
	int n, m;
	cin >> n >> m;
	if (n > m) {
		cout << m << endl;
		cout << (n - m) / 2;
	}
	else {
		cout << n << endl;
		cout << (m - n) / 2;
	};
	
 	
}
int main() {
	giay();
	return 0;
}