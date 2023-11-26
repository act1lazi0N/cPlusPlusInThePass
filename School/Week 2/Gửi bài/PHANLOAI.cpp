#include<bits/stdc++.h>
using namespace std;

void phanloai() 
{
	int a, c;
	cin >> a >> c;
	if (a >= 3 && c <= 4) {
		cout << "1" << " ";
	};
	if (a <= 6 && c >= 2) {
		cout << "2" << " ";
	};
	if (a <= 2 && c <= 3) {
		cout << "3" << " ";
	};
	if (a > 6 && c > 4) {
		cout << "0";
	};
}
	

int main() {
		phanloai();
		return 0;
	}