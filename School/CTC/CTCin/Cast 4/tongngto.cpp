#include<bits/stdc++.h>
using namespace std;

int snt(int n)
{
    if (n < 2)
        return -1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i <= n; i++)
    {
        if (snt(i) == 0)
        {
            k+=i;
        }
    }
    cout << k;
}
