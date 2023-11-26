#include<bits/stdc++.h>
using namespace std;
int snt(long n)
{
    if (n <= 1)
        return 0;
    else
    {
    for (int i = 2; i <= sqrt(n); i++)
        {
        if (n % i == 0)
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (snt(i) == 1)
            {
                int dem = 0;
                while (n % i == 0)
                {
                    n /= i;
                    dem++;

                }
                cout << i << " " << dem << endl;
            }
        }
    }
    if (n != 1 && snt(n) == 1)
    {
        cout << n << " " << 1;
    }
    else


    return 0;
}
