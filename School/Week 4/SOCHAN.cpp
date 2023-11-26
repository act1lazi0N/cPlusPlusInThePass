#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            dem++;
        }
    }
    cout << dem << endl;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}


