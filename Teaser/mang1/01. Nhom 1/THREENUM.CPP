#include <bits/stdc++.h>
#define N 100005
#define ll long long

using namespace std;
int n;
int A[N], MaxI[N], MaxK[N];
ll s, t;

int main()
{
    freopen("THREENUM.inp", "r",stdin);
    freopen("THREENUM.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> A[i];

    MaxI[1] = A[1]; MaxK[n] = A[n];
    for(int i = 2; i < n; i ++)
        if(A[i] < MaxI[i-1]) MaxI[i] = MaxI[i-1];
        else MaxI[i] = A[i];

    for(int k = n-1; k > 1; k --)
        if(A[k] < MaxK[k+1]) MaxK[k] = MaxK[k+1];
        else MaxK[k] = A[k];

    s = 2*MaxI[1] - 3*A[2] + 5*MaxK[3];
    for(int j = 3; j < n; j ++)
    {
        t = 2*MaxI[j-1] - 3*A[j] + 5*MaxK[j+1];
        if (t>s) s = t;
    }

    cout << s;
    return 0;
}
