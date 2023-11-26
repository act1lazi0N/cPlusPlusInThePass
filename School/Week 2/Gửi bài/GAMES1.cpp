#include<bits/stdc++.h>
using namespace std;

void game()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) {
		swap(a, b);
	};
	if (a > c) {
		swap(a, c);
	};
	if (b > c) {
		swap(b, c);
	};
	int t;
	if (abs(a - b) > abs(b - c)) {
		t = abs(a - b);
	}
	else {
		t = abs(b - c);
	};
	cout << t - 1;
}
int main() {
	game();
	return 0;
}