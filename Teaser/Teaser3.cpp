
#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, C;
    cin >> A >> C;
    if (A >= 4 && C <= 4) {
        cout << 1 << " ";
    };
    if (A <= 6 && C >= 2) {
        cout << 2 << " " ;
    }
    if (A <= 2 && C <= 3) {
        cout << 3 << " " ;
    };

        return 0;
}
