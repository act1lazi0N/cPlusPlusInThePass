#include<bits/stdc++.h>
using namespace std;

int dx(int n)
{
    int k = 0;
    while(n != 0)
    {
        k = k * 10 + n % 10;
        n /= 10;
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    if (n == dx(n))
    {
        cout << n;
    }
    else
    {
        while (n != dx(n))
        {
            n = n + dx(n);
        }
        cout << n;
    }


}
