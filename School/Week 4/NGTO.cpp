#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
            return false;
    ++i;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    if (check(n) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
