#include<bits/stdc++.h>
using namespace std;
int n, a[105], b[105];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    b[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = 0;
        for (int j = 1; j < i; j++)
        {
            if (a[j] > a[i])
            {
                d++;
            }
            b[i] = d;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
}
