#include<bits/stdc++.h>
using namespace std;


void tamgiac(int a, int b, int c)
{
	int d;
	d = a + b + c;
	if (d == 180) {
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b || b == c || c == a) {
				cout << "CAN";
			}
			else if (a == 90 || b == 90 || c == 90) {
				cout << "VUONG";
			}
			else if (a == b == c == 60) {
				cout << "DEU";
			}
			else if (a != b != c) {
				cout << "THUONG";
			}
			else
			{
				cout << "0";
			};
		}
		else {
			cout << "0";
		}
	}
	else {
		cout << "0";
	};
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	tamgiac(a, b, c);
	return 0;
}