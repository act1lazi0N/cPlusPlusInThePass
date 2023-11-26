#include <bits/stdc++.h>
#define N 100005
#define ll long long

using namespace std;
int n;
ll k;
ll A[N];

int main()
{
    freopen("ANTS.inp", "r",stdin);
    freopen("ANTS.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) cin >> A[i];

    for(int i = 1; i <= n; i++)
    {
        if(A[i] > 0) A[i] = k - A[i];
        if(A[i] < 0) A[i] = abs(A[i]);
    }

    ll tam = A[1];
    for(int i = 2; i <= n; i++)
    {
        if(tam < A[i]) tam = A[i];
    }

    cout << tam;
    return 0;
}
