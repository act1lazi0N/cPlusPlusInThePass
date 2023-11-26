#include<bits/stdc++.h>
using namespace std;
int n, a[101];
float sum, f;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    f = (sum/n)*2;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i] + a[j] == f && i != j)
                {
                    cout << i << " " << j << "\n";
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
}
