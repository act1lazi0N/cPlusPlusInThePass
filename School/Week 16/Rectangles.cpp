#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    int t, n, m, j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if (n % 2 == 1 || n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < (n/4) + 1; i++)
            {
                j = (n/2) - i;
                cout << i * j << " ";
            }
            cout << endl;
        }

    }

}
