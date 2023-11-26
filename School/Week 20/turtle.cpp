#include<bits/stdc++.h>
using namespace std;
long long a, b, s;
int main()
{
    cin >> a >> b >> s;
    s -= abs(a) + abs(b);
    if (s < 0 || s % 2 != 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}
