#include <bits/stdc++.h>
#define N 1005

using namespace std;
int n, k;
int A[N], B[N];

int main()
{
    freopen("TREE.inp", "r", stdin);
    freopen("TREE.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i ++) cin >> A[i];

    int d = n, x;
    for(int i = 1; i <= 1000; i ++)
    {
        int s = 0;
        for (int j = 1; j <= n; j++)
        {
            int tam = i+(j-1)*k;
            if(A[j] != tam) s++;
        }
        if(d > s){d = s; x = i;}
    }

    cout << d<< endl;
    for (int i = 1; i <= n; i ++)
    {
        int tam = x+(i-1)*k;
        if(A[i] != tam)
        {
            if(A[i] < tam) cout << "+" << " " << i << " " << tam - A[i] << endl;
            if(A[i] > tam) cout << "-" << " " << i << " " << A[i] - tam << endl;
        }
    }
    return 0;
}
