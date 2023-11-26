#include<bits/stdc++.h>
using namespace std;

int a[105], x[105];
int n, m, k;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int j, i = n;
    while(i > 0)
    {
        j = n;
        while(a[j] != 0)
            j--;
            x[j] = i;
            for (int k = j; k <= n; k++)
                a[k] -= 1;
                i--;

    }
    for (int k = 1; k <= n; k++)
    {
        cout << x[k] << " ";
    }
}
