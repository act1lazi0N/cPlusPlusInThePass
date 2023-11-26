#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void giatri()
{
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << " " << b;
	}
	else if (a < b) {
		cout << b << " " << a;
	}
	else {
		srand(time(NULL));
		int res = rand();

	};
}
int main()
{
	giatri();
	return 0;
}