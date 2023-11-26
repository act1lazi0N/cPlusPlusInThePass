#include<bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;
    fflush(stdin);
    string s;
    getline(cin, s);
    int dem = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == x) {
            dem++;
        }
    }
    cout << dem << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            cout << i << " ";
        }
    }


}
