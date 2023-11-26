#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i = 0; i <= S.length()/2; i++) {
        if (S[i] = S[(S.length()/2)-i-1])
        {
             cout << S[i];
        }

    }
    return 0;
}
