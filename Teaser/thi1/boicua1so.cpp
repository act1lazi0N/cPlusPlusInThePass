#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            d++;
        }
    }
    cout << d;

}
