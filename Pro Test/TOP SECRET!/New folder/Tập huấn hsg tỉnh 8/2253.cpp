#include <bits/stdc++.h>
using namespace std;
int i, c;
string s;
int main()
{
    freopen ("2253.inp", "r", stdin);
    freopen ("2253.out", "w", stdout);
    // bai 2;
    cin >> s;
    //while (s[0] == '0') s.erase (0, 1);
    //while (s[s.length() - 1] == '0') s.erase (s.length() - 1, 1);
    int l = s.find ('1'); // tim ki tu '1' dau tien ben trai
    int r = s.rfind ('1'); // tim ki tu '1' dau tien ben phai
    c = 0;
    for (i = l; i <= r; i++)
        if (s[i] == '0') c++;
    cout << c << endl;
    return 0;
}
