#include<bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2) return false;
    for (int j = 2; j <= sqrt(n); j++)

        if (n % j == 0)
            return false;
    return true;
}
int main()
{
    int a[10001], n;
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (snt(a[i] + a[j]) == true)
                dem++;
        }
    }
    cout << dem;
    return 0;
}
