#include<bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            x++;
        }
    }
    if (x % 2 == 1)
    {
        cout << x * (n - x);
    }
    else
    {
        cout << ((x * (n - 1)) + ((n - x) * ((n - x) - 1)))/2;
    }
}
