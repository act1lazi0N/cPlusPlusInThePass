#include<bits/stdc++.h>
using namespace std;

int Line(int n, string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == n)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int minn = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        if (Line(n, s))
        {
            minn = min(i, minn);
        }
    }
    cout << minn;
}
