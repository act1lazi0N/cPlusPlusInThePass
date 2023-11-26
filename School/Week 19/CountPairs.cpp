#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, dem;
    cin >> T;
    while(T--)
    {
        dem = 0;
        int k;
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            dem+=(min(k-i, i - 1));
        }
        cout << dem << "\n";
    }
}
