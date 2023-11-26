#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    int kq = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        kq *= x;
    }
    cout << kq;
    return 0;
}
