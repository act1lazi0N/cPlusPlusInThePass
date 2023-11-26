#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DOIXUNG.INP", "r" , stdin);
    freopen("DOIXUNG.OUT", "w", stdout);
    string s;
    getline(cin, s);
    fflush(stdin);
    if (s[0] == ' ')
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                s.erase(0, i - 0);
                break;
            }
        }
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            for (int k = i; k < s.length(); k++)
            {
                if (s[k] != ' ')
                {
                    s.erase(i, k - i);
                    break;
                }
            }
        }
    }
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+2])
        {
            dem++;
        }
    }
    cout << s << "\n" << dem;


}
