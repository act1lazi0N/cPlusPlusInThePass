#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    while(n > 0)
    {
        int i = n % 10;
        if (i != 0 && i != 6 && i != 8)
        {
            return false;
            n = n / 10;
        }
        return true;
    }
}
int main()
{
    int n;
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
