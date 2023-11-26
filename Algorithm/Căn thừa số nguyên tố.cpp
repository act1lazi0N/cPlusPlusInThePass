#include<bits/stdc++.h>
using namespace std;

int main()
{
    int souoc = 1;
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            cnt++:
            n /= i;
        }
    }
    if (n > 1) souoc *= 2;
    cout << souoc;
}
