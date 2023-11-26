#include<bits/stdc++.h>
using namespace std;

void game()
{
	int a, b;
	cin >> a >> b;
	if (a >= 0 && b <= 2) {

		if (a == 0 && b == 1 || a == 1 && b == 2 || a == 2 && b == 0) {
			cout << "\nBAC";
		}
		else if (a == 1 && b == 0 || a == 2 && b == 1 || a == 0 && b == 1) {
			cout << "\nNAM";
		}
		else if (a == b) {
			cout << "\nHOA";
		};
	}
	else {
		cout << "Over Limit \n";
	};
}
int main()
{
	game();
	return 0;
}