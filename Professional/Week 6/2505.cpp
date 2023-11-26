#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("2505.inp", "r", stdin);
	//freopen("2505.out", "w", stdout);

	ll n, ans = 0;
	cin >> n;

	// i la so chu so, p la so nho nhat co i chu so
	ll i = 1, p = 1;
	for(; p*10-1 <= n; i++, p*=10)
		ans += i * 9*p;

	ans += (n-p+1)*i;

	cout << ans;

	return 0;
