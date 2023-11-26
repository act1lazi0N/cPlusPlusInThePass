#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << "1\n";
        for (int i = 2; i <= n; i++)
        {
            cout << 1;
            for (int j = 2; j <= i - 1; j++)
            {
                cout << "0";
            }
            cout << "1\n";

        }
    }
}
