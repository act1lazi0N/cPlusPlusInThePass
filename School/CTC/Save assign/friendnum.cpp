#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int k1= 0, k2 = 0;
    int i = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            k1+=i;
        }
    }
    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            k2+=i;
        }
    }
    if (k1 == b && k2 == a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}
