#include<bits/stdc++.h>
using namespace std;

int namnhuan(int n) {
	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}long cacngay(int n, int t)
{
	switch (t)
	{
	case 1:case 3:case 5:case 7:case 8: case 10: case 12:
		{
		return 31;
		break;
	};
	case 2:
	{
		if (namnhuan(n)) {
			return 29;
		};
		return 28;
	};
	case 4: case 6:case 9:case 11:
	{
		return 30;
	}

	};
}
void next(int d, int t, int n)
{
	if (n > 0 && t <= 12 && t > 0 && d > 0 && d <= cacngay(n, t)) {
		d++;
		if (t != 12 && d == cacngay(n, t)) {
			d = 1;
			t++;
		}
		else if (t == 12 && d == cacngay(n, t)) {
			d = 1;
			n++;
			t++;
		}
		else if (t == 2) {
			if (namnhuan(n)) {
				if (d == 29) {
					d = 1;
					t++;
				}
				else if (d == 28) {
					d = 1;
					t++;
				};
			};
		};
	}
	cout << d << " " << t << " " << n;
}
int main()
{	
	int d, t, n;
	cin >> d >> t >> n;
	next(d, t, n);
	return 0;
}