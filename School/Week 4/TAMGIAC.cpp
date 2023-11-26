#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= i; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
