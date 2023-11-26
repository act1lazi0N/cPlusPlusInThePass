#include <bits/stdc++.h>
#define N 1004
#define ll long long

using namespace std;
int n, A[N];

int main()
{
    freopen("DBANNER.inp", "r", stdin);
    freopen("DBANNER.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];

    ll tam, s = A[1];
    int nn;
    for (int i = 1; i <= n; i++)
    {
        nn = A[i];
        for (int j = i; j <= n; j++)
        {
            nn = min(nn, A[j]);
            tam = nn * (j - i + 1);
            if (s < tam) s = tam;
        }
    }

    cout << s;
    return 0;
}
