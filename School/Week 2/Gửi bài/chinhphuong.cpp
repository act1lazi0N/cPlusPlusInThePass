#include<bits/stdc++.h>
using namespace std;

void chinhphuong()
{
	int n;
	cin >> n;
	if (n == pow(sqrt(n), 2)) {
		cout << " YES " << endl;

	}
	else {
		cout << " NO " << endl;
	};
}
int main()
{
	chinhphuong();
	return 0;

}