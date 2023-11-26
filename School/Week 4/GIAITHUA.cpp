#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, gt = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        gt = gt * i;

    }
    cout << gt;
    return 0;
}
