#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10001];
    for (int i = 1; i <= n; i++ )
    {
        cin >> a[i];
    }
    int x = a[1], y = 1;
    for (int i = 1; i < n; i++)
    {
        if (x > a[i + 1])
        {
            cout << y << endl;
            x = a[i + 1];
            y = i + 1;
        }
        else
        {
            cout << i + 1 << endl;
        }
    }
}
