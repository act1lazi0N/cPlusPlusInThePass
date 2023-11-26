#include <bits/stdc++.h>
#define N 100

using namespace std;
int n, j, k, i, tam;
int P[N], A[N], B[N];

int main()
{
    freopen("NGHICHTHE2.inp", "r", stdin);
    freopen("NGHICHTHE2.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> P[i];

    for (int i = n; i >= 1; i--)
    {
        int j = n;
        while (j >= 1)
        {
            if(P[j] == 0)
            {
                A[j] = i;
                for(int k = j; k <= n; k++) P[k]--;
                break;
            }
            j--;
        }
    }

    for(int i = 1; i <= n; i++) cout << A[i] << " ";
    return 0;
}
