#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int r, temp, sum = 0;
    for (temp = n; n != 0; n /= 10)
    {
        r = n%10;
        sum = sum * 10 + r;
    }
    if (temp == sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
