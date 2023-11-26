#include<bits/stdc++.h>
using namespace std;

void tamgiac() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c && c == a  ) {
			cout << "YES";
		}
		else {
			cout << "NO";
		};
	}
	else {
		cout << "NO";
	};
}
int main() {
	tamgiac();
	return 0;
}