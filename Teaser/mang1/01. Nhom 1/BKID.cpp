#include <bits/stdc++.h>
#define N 100007

using namespace std;
int n;
int A[N];
int main()
{
    //freopen("BKID.inp", "r",stdin);
    //freopen("BKID.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i ++) cin >> A[i];

    int t = A[1];
    int cs = 1;
    for (int i = 1; i < n; i++)
    {
        if(t > A[i+1])
        {
            cout << cs << endl;
            t = A[i+1];
            cs = i + 1;
        }
        else    cout << i + 1 << endl;
    }
    return 0;
}
