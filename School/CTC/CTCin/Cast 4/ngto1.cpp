#include<bits/stdc++.h>
using namespace std;
int snt(int k)
{
    if (k < 2)
        return -1;
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
            return -1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int k = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k++;
        }
    }
    if (snt(k) == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
}
