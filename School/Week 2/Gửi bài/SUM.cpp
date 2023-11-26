#include<bits/stdc++.h>
using namespace std;

void khoitao()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	long long n[4];
	n[0] = a + b + c + d;
	n[1] = b + c + d + e;
	n[2] = a + c + d + e;
	n[3] = a + b + d + e;
	n[4] = a + b + c + e;
	
	sort(n, n + 5);
	cout << n[0] << " " << n[4];

}
int main()
{
	khoitao();
	return 0;
}