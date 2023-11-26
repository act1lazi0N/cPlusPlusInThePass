#include<bits/stdc++.h>
using namespace std;

void tamgiac() {
	long long a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			cout << "vuong" << endl;
		}
		else if (a == b && b == c && c == a) {
			cout << "deu" << endl;
		}
		if (a == b || b == c || c == a) {
			cout << "can" << endl;
		}
		else {
			cout << "thuong";
		};
	}
	else {
		cout << "khong";
	}
}
int main() {
	tamgiac();
	return 0;
}