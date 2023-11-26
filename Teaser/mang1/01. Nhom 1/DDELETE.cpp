#include <bits/stdc++.h>
#define N 1000006

using namespace std;
int n;
int A[N];

int main()
{
    freopen("DDELETE.inp", "r",stdin);
    freopen("DDELETE.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];

    int sc, sl = 0;
    for (int i = 1; i <= n; i++)
        if(A[i] % 2 == 1) sl ++;
    sc = n - sl;

    if(sl%2 == 1) cout << sl * sc;
    else
    {
        sl = sl*(sl-1)/2;
        sc = sc*(sc-1)/2;
        cout << sl+sc;
    }
    return 0;
}
