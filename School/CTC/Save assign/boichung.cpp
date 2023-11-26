#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a = m*n;
    int b = max(m, n);
    int ans = 0;
    for (int i = b; i <= a; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            cout << i << " ";
        }
    }
}
