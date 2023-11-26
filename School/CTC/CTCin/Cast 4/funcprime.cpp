#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
    if (n < 2)
        return -1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 0;
}
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(snt(i) == 0)
        {
            sum += i;
        }
    }
    if (snt(sum) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
