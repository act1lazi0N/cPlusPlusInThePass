#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string x, y;
    getline(cin, x);
    getline(cin, y);
    for (int i = 0; i < x.size(); i++)
    {
        if (y == x.substr(0, y.size()))
        {
            cout << i + 1 << " ";
        }
        reverse(x.begin(), x.end());
        reverse(x.begin(), x.end()-1);
    }
}
