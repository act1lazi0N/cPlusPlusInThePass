#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, count = 0;
    cin >> a >> b;
    while(b != 0)
    {
        count += a / b;
        long long r = a % b;
        a = b;
        b = r;
    }
    cout << count;
    return 0;
}
