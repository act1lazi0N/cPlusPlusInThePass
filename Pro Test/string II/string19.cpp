#include<bits/stdc++.h>
using namespace std;
bool check1(string s)
{
    for (int i = 0; i < 4; i++)
    {
        if (s[i] >= s[i+1])
        {
            return false;
        }
    }
    return true;
}
bool check2(string s)
{
    for (int i = 1; i < 5; i++)
    {
        if (s[i] != s[0])
        {
            return false;
        }
    }
    return true;
}
bool check3(string s)
{
    return s[0] == s[1] && s[1] == s[2] && s[3] == s[4];
}
bool check4(string s)
{
    for (char x : s)
    {
        if (x != '6' && x != '8')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TC;
    cin >> TC;
    cin.ignore();
    while(TC--)
    {
        string s;
        cin >> s;
        string tmp = s.substr(5, 6);
        tmp.erase(3, 1);
        if (check1(tmp) || check2(tmp) || check3(tmp) || check4(tmp))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
