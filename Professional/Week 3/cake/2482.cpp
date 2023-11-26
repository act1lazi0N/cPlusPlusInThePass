#include <bits/stdc++.h>

using namespace std;



int main()
{
    freopen("2482.INP", "r", stdin);
    freopen("2482.OUT", "w", stdout);
    int n;
    int c = 1e9;
    cin >> n;


    for (int i = 1; i <= n; i++) {

        int a, b;
        cin >> a >> b;
        c = min(c,b/a);
        }


    cout << c << endl;
    return 0;
}
