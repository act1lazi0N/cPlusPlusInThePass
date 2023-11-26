#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, dem;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        a[1] = 4;
        a[2] = 7;
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                a[i] = a[i/2]*10+4;
            }
            else
            {
                a[i] = a[i/2-1]*10+7;
            }
        }
        cout << a[n] << "\n";
    }
}
