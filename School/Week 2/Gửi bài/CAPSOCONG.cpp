#include<bits/stdc++.h>
using namespace std;

void cong() {
	int a, b, c;
	cin >> a >> b >> c;
	
		if (a > b) {
			swap(a, b);
		};
		if (b > c) {
			swap(b, c);
		};
		if (a > c) {
			swap(a, c);
		};
		if (c - b < b - a) {
			cout << c - b + a;
		}
		else if (c - b == b - a) {
			cout << c + b - a;
		}
		else {
			cout << b + b - a;
		};

		
	
}
int main() {
	cong();
	return 0;
}