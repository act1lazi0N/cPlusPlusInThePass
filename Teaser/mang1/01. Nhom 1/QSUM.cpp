#include <bits/stdc++.h>
#define N 100005

using namespace std;
int n, q, x, y;
int A[N];
int S[N];

int main()
{
    freopen("QSUM.inp", "r", stdin);
    freopen("QSUM.out", "w", stdout);

    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> A[i];

    S[1] = A[1];
    for(int i = 2; i <= n; i++) S[i] = S[i-1] + A[i];

    for(int i = 1; i <= q; i++)
    {
        cin >> x >> y;
        cout << S[y] - S[x-1] << endl;;
    }

    return 0;
}
