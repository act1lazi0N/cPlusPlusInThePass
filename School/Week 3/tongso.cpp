#include<bits/stdc++.h>
using namespace std;

int main() {
    //freopen(tongso.inp, "r", stdin);
    //freopen(tongso.out, "w", stdout);
    int a, b;
    int k;
    cin >> a >> b >> k;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum = sum + i;
        }
    }
    cout << sum;
    return 0;
}
