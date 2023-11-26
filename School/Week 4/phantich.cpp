#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int x;
    cin >> n;
    int dem;
    int p = min(n, p*(n/p));
    for (int i = 2; i <= n; i++)
    {

        dem = 0;
        while (n % i == 0) {
            ++dem;
            n /= i;


        }
        if (dem) {
            cout << i << " ";
        }
    }

    return 0;
}
