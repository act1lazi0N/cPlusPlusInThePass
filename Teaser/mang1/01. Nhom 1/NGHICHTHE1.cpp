#include <bits/stdc++.h>
#define N 100

using namespace std;
int n;
int A[N];
int main()
{
    freopen("NGHICHTHE1.inp", "r", stdin);
    freopen("NGHICHTHE1.out", "w", stdout);
    cin >> n;
    for(int i= 1; i<= n; i++) cin >> A[i];

    cout << 0 << " ";
    for(int i= 2; i<= n; i++)
    {
        int d = 0;
        for(int j = i - 1; j >=1; j--)
            if (A[i] < A[j]) d++;
        cout << d << " ";
    }
    return 0;
}
