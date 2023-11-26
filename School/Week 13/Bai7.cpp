#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

}
