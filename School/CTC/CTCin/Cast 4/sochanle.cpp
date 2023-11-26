#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin ,s);
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((i + 1) % 2 == 0 && (int)(s[i] - '0') % 2 != 0)
        {
            cout << "NO";
            return 0;
        }
        if ((i + 1) % 2 != 0 && (int)(s[i] - '0') % 2 == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
