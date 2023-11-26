#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int dp[N];
int a[N];

bool cmp(int x, int y)
{
	return x > y;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("2499.inp", "r", stdin);
	//freopen("2499.out", "w", stdout);

	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];

	sort(a+1, a+n+1, cmp);

	int ans = INT_MAX;
	a[n+1] = 0;
	for(int i = 0; i <= n; i++)
	{
		ans = min(ans, i+a[i+1]);
	}

	cout << ans;
}
