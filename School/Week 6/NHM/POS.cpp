#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    float a[101];
    cin >> n >> x;
    // nhap phan tu a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    // khai trien
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << fixed << setprecision(2) << " " << a[i];
            break;
        }

    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= 0)
        {
            cout << fixed <<setprecision(2) << a[i] << endl;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << " ";
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
