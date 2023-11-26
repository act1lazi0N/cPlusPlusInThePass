#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    string y;
    char n;
    getline(cin, x);
    getline(cin, y);
    for (char j = 'a'; j <= 'z'; j++)
    {
        n = j;
        if (x.find(n) != -1 && y.find(n) != -1 )
        {
            cout << n << endl;
        }
    }
}
