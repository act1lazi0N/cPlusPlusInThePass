#include<bits/stdc++.h>
using namespace std;
int sodep(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while(n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if (cnt>= 2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if(sodep(i))
        {
            cout << i << " ";
        }
    }
}
