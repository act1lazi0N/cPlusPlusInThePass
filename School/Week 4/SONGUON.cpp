#include<bits/stdc++.h>
using namespace std;

int main()
{
    long m, tmp;
    for (int i = 9*length(m); i >= 0; i--)
    {
        tmp = m - i;
        j = 0;
        while (tmp > 0)
        {
            j += tmp % 10;
            tmp /= 10;
        }
        if (i = j)
        {
            return n - i;
        }
    }
    cout << m;
    return 0;
}
