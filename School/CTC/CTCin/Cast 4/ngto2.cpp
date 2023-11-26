#include<bits/stdc++.h>
using namespace std;

int snt(int k)
{
    if (k < 2)
        return -1;
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int k = 0;
    while (n != 0)
    {
        k += n % 10;
        n /= 10;
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
