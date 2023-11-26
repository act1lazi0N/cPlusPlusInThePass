#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
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
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] != ' ')
                {
                    s.erase(i, j - i - 1);
                    break;
                }
            }
        }
    }
    cout << s;
    system("pause");
    return 0;

}
