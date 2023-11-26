#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[1001];
    }
    int sum, dem = 0;
    int index = x;
    for (int i = 0; i < n - 1; i++)
    {
        int one = a[i];
        for (int j = i + 1; j < n; j++)
        {
            int two = a[j];
            if (one + two == index)
            {
                dem++;
            }
        }
    }
    cout << dem;
}
