#include<bits/stdc++.h>
using namespace std;
bool save(string s, string c)
{
    string b = c;
    while(c.size() < s.size())
    {
        c+=b;
    }
    if (c == s)
        return true;
    return false;
}
int main()
{
    string s, c = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        c += s[i];
        if (save(s, c))
        {
            cout << c;
            break;
        }
    }
}
